# 🔝 Top-K-Elementos 🔝


<div style="display: inline_block" align="left">
  <img align="center" alt="VS" src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white" />
  <img align="center" alt="C++" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img align="center" alt="Linux" src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" />
  <img align="center" alt="Windows" src="https://img.shields.io/badge/Windows-FCC624?style=for-the-badge&logo=windows&logoColor=blue" />
  <img align="center" alt="CMake" src="https://img.shields.io/badge/CMake-FF5733?style=for-the-badge&logo=cmake&logoColor=white" />
  <img align="center" alt="Makefile" src="https://img.shields.io/badge/Makefile-FF5733?style=for-the-badge" />
</div>

<!-- 

## Questionário:

1. O código pode ser baixado do git? ✅
4. O código está bem estruturado e organizado? ✅
5. O código bem como a entrada seguem os padrões de pasta e nomes definidos? ✅

............................................................................

6. A documentação apresenta uma discussão sobre o problema?
7. A documentação apresenta como foi pensado a resolução do problema?
8. A documentação apresenta pequenos exemplos para explicar o funcionamento?
9. A documentação apresenta conclusões sobre o trabalho?
10. A documentação detalha a forma como o código deve ser compilado?

## Documentação

A documentação a ser produzida deve conter, pelo menos, as seguintes partes:

• Um detalhamento mínimo que explique as fases de especificação, projeto e implemen-
tação. Nessa etapa, deve-se incluir uma ampla discussão sobre as estruturas utilizadas
e o motivo de sua escolha para manter o desempenho da solução.

• Para os arquivos utilizados para teste, uma descrição da saída esperada.

• Uma parte do README.md contendo todas as instruções necessárias para a execução
de seu trabalho para arquivos de entrada diferentes dos adotados durante os testes.

• Um git contendo todo o projeto, bem como, toda descrição pertinente sobre sua execução,
projeto e implementação. Neste documento (README.mb), espera-se observar uma
discussão sobre as estruturas adotadas e o motivo de tal utilização. Nesse último ponto,
tente realizar um paralelo com outras estruturas para demonstrar de fato que as estruturas
adotadas são as melhores possíveis para o problema em questão.

================================================================================================== Seu comentário aqui -->

## Wiki do Projeto 📚

<div align="justify">

Para obter informações mais detalhadas sobre o projeto acesse a [**Wiki**](https://github.com/phpdias/top-k-elementos/wiki). 

Na Wiki, você terá acesso à documentação completa, instruções de execução e detalhes sobre as estruturas de dados, algoritmos utilizados e outros aspectos relevantes do projeto.

</div>

## Apresentando o problema 📝

<div align="justify">

**Solucionando o Desafio dos Top K Itens com Hash e Heap em C++**

Imagine que você está trabalhando em um projeto que envolve a análise de grandes volumes de dados. Uma das tarefas essenciais nesse contexto é identificar os k itens mais valiosos em uma coleção de dados. Esses "itens valiosos" podem representar os produtos mais vendidos em um e-commerce, as palavras mais frequentes em um conjunto de documentos ou até mesmo os tópicos mais discutidos em uma rede social. A questão é: como podemos eficientemente resolver esse desafio?

O problema dos top k itens é um exemplo clássico que surge em muitas aplicações do mundo real. A tarefa parece simples à primeira vista, mas quando lidamos com grandes conjuntos de dados, a eficiência se torna crucial. É nesse ponto que entram em jogo duas estruturas de dados fundamentais: o hash e o heap.

A abordagem envolve duas etapas principais. Primeiro, é preciso determinar a frequência de cada item na coleção. Isso significa que necessita contar quantas vezes cada item aparece. Nesse momento é onde o hash entra em cena. Um hash permite armazenar e acessar rapidamente valores associados a chaves. Nesse caso, pode-se usar o hash para mapear cada item em sua contagem correspondente.

A segunda etapa envolve a identificação dos k itens de maior valor. Nesse contexto, "valor" é determinado pela frequência do item na coleção. Para manter um controle eficiente desses k itens de maior valor, utilizou-se uma estrutura de dados chamada heap. Um heap é uma árvore especial em que cada nó tem um valor associado, e os nós são organizados de maneira que o nó pai tenha sempre um valor maior do que seus nós filhos (no caso de um heap máximo - e, de forma arbitrária, o heap mínimo possui valor do nó pai sempre menor que o valor de seus nós filhos). Isso permite manter constantemente o item de menor valor entre os k itens de maior valor, facilitando a substituição quando um novo item mais valioso é encontrado.

Agora, a pergunta é: como podemos implementar essa solução usando C++? Como podemos criar um hash para contar as frequências dos itens e um heap para manter os k itens de maior valor? Qual é a complexidade temporal e espacial dessa solução? Ao explorarmos essas questões, estaremos preparados para enfrentar esse desafio dos top k itens e aplicar nosso conhecimento sobre hash e heap para obter resultados eficientes e precisos.

</div>

## Implementação do Problema 💡

**Contagem de Frequência com Tabela de Dispersão (Hash)**

Uma etapa fundamental na resolução do desafio dos top k itens envolve a criação de uma tabela de dispersão, também conhecida como hash. Essa estrutura nos permite realizar a contagem eficiente da frequência de cada elemento tokenizado presente na coleção de dados de entrada.

**Construção da Árvore de Prioridades (Heap)**

No processo de abordar o problema dos top k itens, é essencial construir uma árvore de prioridades, também chamada de heap, com um tamanho fixo de k. Nessa etapa, os primeiros k elementos da tabela de dispersão (hash) são inseridos na árvore de prioridades, onde serão gerenciados de acordo com as propriedades de um heap, permitindo a identificação eficiente dos k itens de maior valor.

## Regras 📜

1. **Para cada elemento restante na hash, compare a contagem com o menor valor do heap.**

2. **Se a contagem for maior do que o menor valor da heap, remova o menor valor, insira o novo elemento e refaça a estrutura.**

3. **Caso contrário, ignore o elemento e vá para o próximo.**

4. **No final, a heap conterá os k elementos com maiores valores (frequências) da coleção de dados. Então, imprima-os em ordem crescente.**

## Representação gráfica 📷

## Resolução do problema ✅

Agora, a pergunta é: como podemos implementar essa solução usando C++? Como podemos criar um hash para contar as frequências dos itens e um heap para manter os k itens de maior valor? Qual é a complexidade temporal e espacial dessa solução? Ao explorarmos essas questões, estaremos preparados para enfrentar esse desafio dos top k itens e aplicar nosso conhecimento sobre hash e heap para obter resultados eficientes e precisos.

## Experimentação 🔬

<div align="justify">
	
Nesta seção, apresentaremos os resultados do sistema envolvendo três tipos de entradas diferentes: [input0.txt](https://github.com/), [input1.txt](https://github.com/) e [stopwords.txt](https://github.com/). O objetivo desse tópico é demonstrar o resultado e a eficácia desse algoritmo em determinado cenário.

### Entradas de dados necessárias 🔡

No programa existe uma pasta nomeada como `dataset`, que dentro contém um outro diretório `input` e um documento chamado `stopwords.txt`.

### Diretório input 🔡

### Arquivo stopwords.txt 🔣

Este arquivo foi retirado desse repositório git utilizado como referência: [Labirinto Recorrente](https://github.com/phpdias/labirinto-recorrente) [^1]

Analogamente, também pode ser digitado manualmente pelo usuário, mas não é o intuito que utilize dessa forma.

### Saídas obtidas

Ao executar o programa, a seguinte saída será geradas.

Observe que

Primeiro é impresso

Em seguida é mostrado

Por fim

A entrada consiste em um arquivo de texto sem formatação e escrito no padrão ASCII. O resultado obtido está na imagem abaixo.

<div align="center">

![Screenshot from 2023-08-24 23-52-06](https://github.com/phpdias/top-k-elementos/assets/84406892/359edb92-d96f-4479-93be-0e3ba8dea5ab)

</div>

</div>

A seguir, três seções das quais abordo a resolução do problema, desde a [entrada de dados](https://github.com/phpdias/), [saída de dados](https://github.com/phpdias/) e uma rápida explicação de cada uma das [funções imeplementadas](https://github.com/phpdias/) no programa.

## Análise de Complexidade 🔎

Ao implementar adequadamente esse algoritmo, sua complexidade é estimada em O(nlogk), em que 'n' denota o tamanho total da coleção de dados e 'k' representa o número de elementos mais relevantes que são considerados. Essa análise reflete a eficiência do algoritmo na gestão de grandes conjuntos de dados ao empregar estruturas de dados como hash e heap, contribuindo para um desempenho otimizado na identificação dos elementos mais significativos.


## Conclusão 🎯

# Compilação e Execução 🔄

Este algoritmo possui um arquivo Makefile e um arquivo CMakeLists que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

## Comandos para Linux:

| <img align="center" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="30" height="30"/>      | Função                                                                                  |
| ------------ | --------------------------------------------------------------------------------------- |
| `make clean` | Apaga a última compilação realizada contida na pasta build                              |
| `make`       | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build |
| `make run`   | Executa o programa da pasta build após a realização da compilação                       |
| `make r`     | Realiza o `make clean`, `make` e `make run` juntos                                      |

## Comandos para Windows:

| <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/windows8/windows8-original.svg" alt="Windows Icon" width="30" height="30">                       | Função                                                                                        |
| ----------------------------- | --------------------------------------------------------------------------------------------- |
| `cmake -B ./build-debug`      | Executa geração de arquivos e o resultado vai para a pasta build-debug                        |
| `cmake --build ./build-debug` | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build-debug |
| `./build-debug/app`           | Executa o programa da pasta build-debug após a realização da compilação                       |

# Contatos 📇

| Contato           | Telegram                | LinkedIn           |   GitHub           |             
| -----------------------| -----------------------|-----------------------|-----------------------|
|  Pedro Dias            | <a href="https://t.me/phpdias"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/>                                       			       | <a href="https://linkedin.com/in/phpd"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/></div>| <a href="https://github.com/phpdias"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"/></div>

## Referências

[^1]: [GitHub](https://github.com/phpdias/labirinto-recorrente)
