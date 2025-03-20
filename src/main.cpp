#include <iostream>
#include "ordenacao.h"
#include "utils.h"
#include "busca.h"

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