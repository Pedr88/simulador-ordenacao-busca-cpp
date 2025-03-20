# Simulador de Ordenação e Busca em C++

Este projeto implementa e compara diferentes algoritmos de ordenação e busca em C++.

## Estrutura do Projeto

- `include/`: Contém os arquivos de cabeçalho (.h).
- `src/`: Contém os arquivos de implementação (.cpp).
- `.vscode/`: Contém as configurações do Visual Studio Code.
- `README.md`: Documentação do projeto.

## Algoritmos Implementados

### Ordenação

- Bubble Sort
- Quick Sort
- Merge Sort

### Busca

- Linear Search
- Binary Search

## Como Compilar

### Usando CMake

1. Crie um diretório `build` e navegue até ele:
    ```sh
    mkdir build
    cd build
    ```

2. Gere os arquivos de build com CMake:
    ```sh
    cmake ..
    ```

3. Compile o projeto:
    ```sh
    make
    ```

### Usando Makefile

1. Compile o projeto:
    ```sh
    make
    ```

## Como Executar

### Executar o Programa Principal

1. Navegue até o diretório `build` (se estiver usando CMake) ou o diretório raiz do projeto (se estiver usando Makefile).

2. Execute o programa principal:
    ```sh
    ./main
    ```

## Benchmarking

O programa principal inclui uma função de benchmarking que mede o tempo de execução dos algoritmos de busca. Os resultados são exibidos no console.

### Exemplo de Saída

```plaintext
Linear Search levou 12345 milissegundos e encontrou o valor no indice 3 ate o indice 3, e esse valor se repetiu 1 vezes.
Binary Search levou 6789 milisegundos e encontrou o valor no indice 2 ate o indice 2, e esse valor se repetiu 1 vezes.