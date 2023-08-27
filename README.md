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

Para obter informações mais detalhadas sobre o projeto, acesse a [**Wiki**](https://github.com/phpdias/top-k-elementos/wiki).

Na Wiki, você terá acesso à documentação completa, instruções de execução e análise detalhada sobre as estruturas de dados, algoritmos utilizados e outros aspectos relevantes do projeto.

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

Nesse tópico uma breve análise das propriedades e funcionalidades do projeto. Para informações detalhadas e mais aprofundadas, acesse a [**Wiki**](https://github.com/phpdias/top-k-elementos/wiki).

**Processamento de Texto e Manipulação de Arquivos em C++**

O arquivo main do código demonstra um método de como processar texto e manipular arquivos em C++. Por meio de diversas bibliotecas e funcionalidades da linguagem, percorre arquivos de texto em um diretório especificado, lê seus conteúdos, realiza operações de processamento de texto e cria um mapa de frequência das palavras encontradas.

1. **Leitura de Arquivos de Texto:**
   O código utiliza a biblioteca `<filesystem>` para percorrer arquivos em um diretório específico. Verifica-se cada arquivo é regular, se possui extensão ".txt" e se o nome do arquivo começa com "input". Caso essas condições sejam atendidas, o conteúdo do arquivo é lido e adicionado à variável `concatenatedText`. Isso ilustra um modelo de como pode ser usado para iterar sobre arquivos em um diretório e ler seus conteúdos.

2. **Processamento de Texto:**
   A string `concatenatedText` acumula o conteúdo de todos os arquivos de texto lidos. Em seguida, essa string é convertida em um fluxo de entrada (`istringstream`) e passada para a função `processText`, juntamente com um mapa de frequência das palavras e um conjunto de palavras irrelevantes ("stopwords").

3. **Uso de Hashing:**
   Após o processamento das frequências das palavras, o código chama a função `processHash`, que leva o mapa de frequência e um valor `k` como argumentos.

### **Contagem de Frequência com Tabela de Dispersão (Hash)**

Uma etapa fundamental na resolução do desafio dos top k itens envolve a criação de uma tabela de dispersão, também conhecida como hash table. Essa estrutura nos permite realizar a contagem eficiente da frequência de cada elemento tokenizado presente na coleção de dados de entrada.

Esta é uma abordagem eficiente e escalável no processamento de linguagem natural. Essa técnica aproveita as propriedades da estrutura de dados de hash para armazenar e acessar informações de forma rápida, tornando possível o mapeamento direto entre palavras e suas contagens de frequência. Ao associar cada palavra a um índice calculado por uma função de hash, a tabela de dispersão elimina a necessidade de percorrer todo o conjunto de palavras, agilizando a operação de inserção e recuperação.

Além disso, a utilização de uma tabela de dispersão permite lidar eficazmente com colisões, situações em que duas palavras têm a mesma posição calculada. No contexto da contagem de frequência, a eficiência proporcionada pela tabela de dispersão é essencial, especialmente quando se lida com grandes volumes de texto.

Em comparação com abordagens de busca sequencial, a técnica de Hashing otimiza o tempo de processamento, tornando-a uma escolha sólida para tarefas de análise de texto que exigem uma avaliação precisa e rápida da frequência das palavras.

No arquivo `hash.cpp`, o código é responsável por realizar o processamento de um texto para calcular a frequência das palavras no mesmo, excluindo as palavras que são consideradas stopwords. A seguir, uma breve análise e discussão das propriedades e funcionalidades desse código.

**Processamento de Texto com Exclusão de Stopwords**

O código apresenta uma implementação de processamento de texto que tem como objetivo calcular a frequência das palavras em um determinado texto, excluindo aquelas que são consideradas `stopwords`. Stopwords são palavras comuns em um idioma que geralmente não são relevantes para a análise de texto, pois não carregam um significado distinto.

A função `readStopwords` é responsável por ler um arquivo contendo uma lista de stopwords e armazená-las em um conjunto (unordered_set) chamado `stopwords`. Isso é realizado através da abertura do arquivo especificado pelo parâmetro `filename` e, caso o arquivo seja aberto com sucesso, as stopwords são lidas linha por linha e inseridas no conjunto. Caso contrário, uma mensagem de erro é exibida. Essa função retorna o conjunto de stopwords lidas.

A segunda função, `processText`, recebe como parâmetros um fluxo de entrada (`inputStream`), um mapa não ordenado (unordered_map) chamado `frequencyMap` e o conjunto de stopwords `stopwords`. A função percorre o fluxo de entrada linha por linha, onde cada linha é processada em busca de palavras. Para cada palavra encontrada, várias etapas de pré-processamento são aplicadas:

1. **Transformação para minúsculas:** A palavra é convertida para minúsculas usando a função `transform` da biblioteca `<algorithm>`, garantindo que as palavras em maiúsculas e minúsculas sejam tratadas como iguais.

2. **Remoção de pontuações no início e no final:** Quaisquer pontuações no início ou no final da palavra são removidas utilizando as funções `ispunct` e os métodos `erase` e `pop_back`.

3. **Verificação de stopwords:** A palavra é verificada se está presente no conjunto de stopwords. Se sim, a palavra é ignorada e o processamento passa para a próxima palavra.

4. **Segmentação em palavras:** A palavra é dividida em segmentos utilizando caracteres de espaço e pontuações como delimitadores. Isso é feito usando um loop que encontra os índices de início e fim de cada palavra ou segmento dentro da palavra original.

5. **Atualização do mapa de frequência:** Se o segmento for uma palavra não vazia e não uma stopword, ela é inserida no mapa `frequencyMap` e sua contagem é incrementada.

Dessa forma, essa função percorre o texto palavra por palavra, realizando o processamento necessário para calcular a frequência de palavras relevantes, ignorando stopwords e tratando corretamente as pontuações e caracteres especiais.

### **Construção da Árvore de Prioridades (Heap)**

No processo de abordar o problema dos top k itens, é essencial construir uma árvore de prioridades, também chamada de heap, com um tamanho fixo de k. Nessa etapa, os primeiros k elementos da tabela de dispersão (hash) são inseridos na árvore de prioridades, onde serão gerenciados de acordo com as propriedades de um heap, permitindo a identificação eficiente dos k itens de maior valor.

O código aplicado implementa uma série de funções que lidam com a manipulação de um heap mínimo (min-heap) para encontrar e exibir os "k" elementos de maior frequência de um mapa de frequência de palavras. Vou discutir brevemente as propriedades e a funcionalidade desse trecho de código abaixo:

**Exploração de Heaps Mínimos para Encontrar os "k" Elementos de Maior Frequência**

1. **Uso de Heap Mínimo para Manter os "k" Elementos de Maior Frequência:**
   Para este projeto, utilizou-se a estrutura de dados do heap mínimo para armazenar os "k" elementos de maior frequência. Isso é alcançado através da função `insertToMinHeap`, que insere elementos no heap, garantindo que o heap sempre contenha os "k" elementos mais frequentes encontrados até o momento. A lógica é que, quando o heap atinge tamanho "k", se um novo elemento tiver uma frequência maior que a do menor elemento atual no heap, o menor elemento é removido e o novo elemento é inserido.

2. **Iteração sobre o Heap para Impressão dos Resultados:**
   A função `printMinHeap` é responsável por iterar sobre o heap mínimo resultante e exibir os "k" elementos de maior frequência, juntamente com suas frequências associadas. A saída é formatada de maneira agradável, destacando a palavra e sua frequência. A exibição dos resultados é uma etapa crucial para compreender a análise e interpretação dos dados processados.

3. **Processamento do Mapa de Frequência:**
   A função `processHash` recebe um mapa de frequência de palavras e um valor "k" como parâmetros. Ela itera sobre as entradas do mapa, criando objetos `HeapNode` para cada palavra e sua frequência correspondente. Esses objetos são então inseridos no heap mínimo através da função `insertToMinHeap`. Uma vez que todas as entradas foram processadas e o heap contém os "k" elementos mais frequentes, a função `printMinHeap` é chamada para exibir os resultados.

Referências para as funções utilizadas:

[CPP Reference](https://en.cppreference.com/) [^2]

[CPlusPlus](https://en.cppreference.com/) [^3]

## Regras 📜

No arquivo disponibilizado pelo professor da disciplina, houveram algumas regras explícitas para serem seguidas. Disponível a seguir:

1. **Para cada elemento restante na hash, compare a contagem com o menor valor do heap.**

2. **Se a contagem for maior do que o menor valor da heap, remova o menor valor, insira o novo elemento e refaça a estrutura.**

3. **Caso contrário, ignore o elemento e vá para o próximo.**

4. **No final, a heap conterá os k elementos com maiores valores (frequências) da coleção de dados. Então, imprima-os em ordem crescente.**

## Resolução do problema ✅

Após a conclusão do projeto, temos aqui um algoritmo capaz de:

- [✔️] Ler uma quantidade não determinada de textos;
- [✔️] Processar esses textos tratando a questão de letras maiúsculas, minúsculas, espaços e pontuações;
- [✔️] Remoção de StopWords;
- [✔️] Utilização de Hash e Heap;
- [✔️] Demonstrar de forma eficaz os Top-K-Elementos de um conjunto de dados;

Após a apresentação do tema, bem como a demonstração da lógica, serão apresentados todos os resultados obtidos a partir dos testes feitos.

## Experimentação 🔬

<div align="justify">
	
Nesta seção, iremos apresentar o resultado do sistema envolvendo, em conjunto, três tipos de entradas diferentes: [input0.txt](https://github.com/phpdias/top-k-elementos/blob/main/dataset/input/input0.txt), [input1.txt](https://github.com/phpdias/top-k-elementos/blob/main/dataset/input/input1.txt) e [stopwords.txt](https://github.com/phpdias/top-k-elementos/blob/main/dataset/stopwords.txt). O propósito deste tópico é demonstrar o resultado e a eficácia desse algoritmo em um cenário específico. Em seguida, forneceremos uma breve explicação do conteúdo desses arquivos, juntamente com instruções sobre como o usuário pode realizar modificações, exclusões ou inclusões de novas coleções de dados.

</div>

### Entradas de dados necessárias 🗂️

Dentro do programa, encontra-se uma pasta denominada [dataset](https://github.com/phpdias/top-k-elementos/tree/main/dataset), a qual abriga, em seu interior, um outro diretório nomeado como [input](https://github.com/phpdias/top-k-elementos/tree/main/dataset/input) e um documento intitulado [stopwords.txt](https://github.com/phpdias/top-k-elementos/blob/main/dataset/stopwords.txt).

#### Diretório ./dataset/input 📂

Neste diretório se encontram os arquivos em texto que serão lidos para a contagem da frequência de palavras.

É estritamente necessário que todos os arquivos dentro desse diretório sejam do tipo `.txt` e seja nomeado como `inputX`.

Exemplo: `input0.txt`, `input1.txt`...

Isso é essencial porque o algoritmo faz um tratamento para concatenar todos os textos, e para isso é lido todos os arquivos da `./dataset/input`.

#### Arquivo stopwords.txt 🛑

Este arquivo foi retirado desse repositório git utilizado como referência: [Labirinto Recorrente](https://github.com/phpdias/labirinto-recorrente) [^1]

Analogamente, também pode ser digitado manualmente pelo usuário, mas não é o intuito inicial a utilização dessa forma.

### Saídas obtidas

Após garantir o correto funcionamento dos arquivos acima, ao executar o programa, a seguinte saída será gerada.

Observe que existe um padrão nas impressões. Na primeira posição, por utilizar o `minHeap`, sempre irá ter a palavra com menor frequência dentre os k itens mais frequentes.

Primeiro é impresso a palavra, em vermelho. Em seguida é mostrado a frequência com que essa palavra é repetida durante todos os textos.

A entrada consiste em um arquivo de texto sem formatação e escrito no padrão ASCII.

O resultado obtido está na imagem abaixo.

<div align="center">

![Screenshot from 2023-08-24 23-52-06](https://github.com/phpdias/top-k-elementos/assets/84406892/359edb92-d96f-4479-93be-0e3ba8dea5ab)

</div>

</div>

## Análise de Complexidade 🔎

Ao implementar adequadamente esse algoritmo, sua complexidade é estimada em O(nlogk), em que 'n' denota o tamanho total da coleção de dados e 'k' representa o número de elementos mais relevantes que são considerados. Essa análise reflete a eficiência do algoritmo na gestão de grandes conjuntos de dados ao empregar estruturas de dados como hash e heap, contribuindo para um desempenho otimizado na identificação dos elementos mais significativos.

## Conclusão 🎯

O projeto apresentado oferece uma visão prática de como C++ pode ser usado para processar e analisar dados textuais por meio de operações de leitura de arquivos, processamento de texto e uso de técnicas de hashing. Ele ilustra a importância das bibliotecas padrão da linguagem e das técnicas de programação eficiente para lidar com tarefas de processamento de dados. Esse código serve como exemplo da versatilidade do C++ e da sua aplicação em cenários que envolvem análise de texto e manipulação de arquivos.

Em conclusão, o `hash.cpp` apresenta um método robusto para processar textos, calcular a frequência de palavras relevantes e desconsiderar stopwords, o que é uma etapa fundamental em várias aplicações de processamento de linguagem natural, como análise de sentimentos, extração de informações e sumarização de texto. A implementação cuidadosa das etapas de pré-processamento e a consideração das stopwords tornam esse código uma ferramenta eficaz para analisar e compreender melhor o conteúdo de um texto.

Há também a demonstração da eficácia dos heaps mínimos na identificação dos "k" elementos de maior frequência a partir de um mapa de frequência de palavras. Essa abordagem otimizada permite a manipulação de grandes volumes de dados de maneira eficiente, sendo especialmente útil em cenários nos quais a análise da frequência de palavras é essencial, como processamento de texto, análise de dados linguísticos e muito mais. Ao utilizar as propriedades dos heaps mínimos, o código oferece uma solução escalonável e eficaz para essa tarefa específica.

# Compilação e Execução 🔄

Este algoritmo possui um arquivo Makefile e um arquivo CMakeLists que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

## Comandos para Linux:

| <img align="center" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="30" height="30"/> | Função                                                                                  |
| ------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------- |
| `make clean`                                                                                                                                            | Apaga a última compilação realizada contida na pasta build                              |
| `make`                                                                                                                                                  | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build |
| `make run`                                                                                                                                              | Executa o programa da pasta build após a realização da compilação                       |
| `make r`                                                                                                                                                | Realiza o `make clean`, `make` e `make run` juntos                                      |

## Comandos para Windows:

| <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/windows8/windows8-original.svg" alt="Windows Icon" width="30" height="30"> | Função                                                                                        |
| ---------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------- |
| `cmake -B ./build-debug`                                                                                                                             | Executa geração de arquivos e o resultado vai para a pasta build-debug                        |
| `cmake --build ./build-debug`                                                                                                                        | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build-debug |
| `./build-debug/app`                                                                                                                                  | Executa o programa da pasta build-debug após a realização da compilação                       |

# Contatos 📇

| Contato    | Telegram                                                                                                                                                                             | LinkedIn                                                                                                                                                                                           | GitHub                                                                                                                                                                                       |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Pedro Dias | <a href="https://t.me/phpdias"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> | <a href="https://linkedin.com/in/phpd"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/></div> | <a href="https://github.com/phpdias"><img align="center" height="24px" width="90px" src="https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white"/></div> |

## Referências

[^1]: [GitHub](https://github.com/phpdias/labirinto-recorrente)
[^2]: [CppReference](https://en.cppreference.com/)
[^3]: [CPlusPlus](https://cplusplus.com/)
