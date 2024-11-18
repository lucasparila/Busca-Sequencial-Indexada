# Busca-Sequencial-Indexada
> ℹ️ **NOTE:** Este repositório foi criado para armazenar e compartilhar os resultados obtidos em um exercício avaliativo da disciplina Estruturas de Dados do curso superior Tecnologias em Sistemas para a Internet, da instituição IFSP - Campus Araraquara.
## 🛠️ Instruções Para a Execução do Exercício
### Operação de Busca
Implemente um sistema que realize a busca sequencial indexada em um arquivo contendo 1 milhão de
registros gerados de forma aleatória, mas ordenada. Para otimizar a busca, o sistema deve utilizar pelo
menos uma tabela auxiliar de índices, que será usada para localizar intervalos no arquivo onde a busca
sequencial será aplicada. A implementação deve ser feita em linguagem C, e você deve considerar a
eficiência tanto na criação quanto na consulta dos índices.

## 📚 Busca Sequencial Indexada

A busca sequencial indexada é uma variação da busca sequencial usada para localizar elementos em um conjunto de dados, combinando aspectos de pesquisa linear com o uso de índices que aceleram o processo. A sua implementação se divide nos seguintes passos: 
- Passo 1- **Divisão dos dados e criação de índices:** O conjunto de dados é dividido em blocos menores. Cada bloco contém um número fixo ou variável de elementos. O índice armazena uma chave de referência para cada bloco. Essa chave pode ser o menor valor, maior valor ou outra característica representativa do bloco. O índice também pode armazenar o local inicial de cada bloco (por exemplo, o endereço ou posição no armazenamento).

- Passo 2- **Busca no índice:** A chave buscada é comparada com as chaves no índice para determinar em qual bloco ela pode estar. 
- Passo 3- **Busca no bloco:** Após identificar o bloco, realiza-se uma busca sequencial apenas dentro dele.

A **Busca Sequencial Indexada** é útil quando o conjunto de dados é grande e acessar diretamente os elementos é custoso, mas manter uma estrutura como uma árvore binária seria desnecessário ou complicado. O uso de índices reduz o número de elementos que precisam ser percorridos.

### Vantagens: 
- A busca é dividida em duas partes menores: busca no índice e busca no bloco.
- Reduz o número de comparações em relação à busca sequencial simples, especialmente em grandes conjuntos de dados.
- É mais fácil de implementar e ajustar do que algoritmos mais complexos como a busca binária.
- Funciona bem em cenários onde os dados mudam frequentemente, pois a estrutura de índice pode ser ajustada de maneira incremental.

### Desvantagens: 
- A criação e atualização do índice podem ser custosas, especialmente em sistemas com alta taxa de inserções, remoções ou atualizações.
- Não é tão eficiente quanto algoritmos mais sofisticados (como busca binária) em termos de desempenho absoluto.
- O desempenho depende de como os blocos e índices são estruturados. Um índice mal projetado pode oferecer poucas melhorias em relação à busca linear simples.
- O índice ocupa espaço extra na memória ou armazenamento.

### Aplicações Práticas
**Sistemas de Bancos de Dados:** 
- Bancos de dados utilizam índices para acelerar consultas em tabelas muito grandes. Por exemplo, índices em colunas ajudam a localizar rapidamente os registros desejados.

**Pesquisas em Arquivos:** 
- Em sistemas de arquivos ou grandes listas ordenadas (como listas telefônicas), a busca linear indexada pode reduzir o número de acessos necessários.


## ✨ Como Foi Feito?

- Foi utilizado o editor de código-fonte Visual Studio Code (VS Code).
- O código foi desenvolvido na linguagem C.  
- Foi feito um vídeo para apresentar a nossa estratégia e o código desenvolvido.

## 💻 Configurações Básicas da Máquina Utilizada para os Testes
- Processador: Intel(R) Core(TM) i5-10400F CPU @ 2.90GHz   2.90 GHz.
- RAM instalada: 8,00 GB (utilizável: 7,87 GB). 
- Tipo de sistema: Sistema operacional de 64 bits, processador baseado em x64. 
- Sistema operacional: Windows 11 Pro. 

## 👨‍💻 Feito Por

<p>
    <img 
      align=left 
      margin=10 
      width=80 
      s
    />
    <p>Lucas Eduardo Parila<br>
    <a href="https://github.com/lucasparila">GitHub</a> &nbsp;|&nbsp; 
    <a href="https://www.linkedin.com/in/lucas-eduardo-parila-18638b252/​">LinkedIn</a>
</p>
<p>
    <img 
      align=left 
      margin=10 
      width=80 
      s
    />
    <p>
    Matheus Correa<br>
    <a href="https://github.com/lucasparila">GitHub</a> &nbsp;|&nbsp; 
    <a href="https://www.linkedin.com/in/lucas-eduardo-parila-18638b252/">LinkedIn</a>
</p>
<br/><br/>

---

