#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define MAX 1000000

void gera_indice(int array[], int *tamanho, int *inicio, int *fim, bool *achou, int *result, int key){
    int indice[10];
    *tamanho = *tamanho/10;
    int i = 0;
    int j = *tamanho;
    
    while (i < 10)
    {
        indice[i]= j + *inicio;
        i++;
        j+= *tamanho;
    }

    for (int i = 0; i < 10 && *achou == false && array[indice[i]] < key; i++) {
        if (array[indice[i]] == key) {
            *achou = true;
            *result = indice[i];
        }else if(array[indice[i]] > key){
            *inicio = indice[i-1];
            *fim = indice[i];
        }
    }

}
int busca_sequencial_indexada(int arr[], int tamanho,int valor) {
    
    bool achou = false;
    int result = -1;
    int inicio = 0;
    int fim = tamanho;
    int i=0;
    while(i < 5 && achou == false){
        gera_indice(arr, &tamanho, &inicio, &fim, &achou, &result, valor);
        i++;
    }

    if(achou == false){
         for (int i = inicio; i < fim; i++) {
            if (arr[i] == valor){
                result = i;
            }
        }
    }

    return result;
    
}

int main() {
    int arr[MAX];
   
    srand((unsigned) time(NULL));
    arr[0] = rand() % 10 + 1; 
    for (int i = 1; i < MAX; i++) {
        arr[i] = arr[i - 1] + (rand() % 10 + 1);
    }

    
    int valor = 10;
    int resultado = busca_sequencial_indexada(arr, MAX, valor);

    if (resultado != -1) {
        printf("Valor %d encontrado na posição %d.\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado.\n", valor);
    }

  

    return 0;
}
