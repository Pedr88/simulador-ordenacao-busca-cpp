#include <iostream>
#include "../include/ordenacao.h"
#include "../include/utils.h"
#include "../include/busca.h"

using namespace std;

int main() {
    // Testando algoritmos de ordenacao
    cout << "Benchmarking algoritmos de ordenacao" << endl;
    benchmarkSortingAlgorithms();

    // Testando algoritmos de busca
    cout << "Benchmarking algoritmos de busca" << endl;
    benchmarkSearchingAlgorithms();
    
    return 0;
}