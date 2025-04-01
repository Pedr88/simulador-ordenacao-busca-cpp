#include <iostream>
#include <chrono>
#include "../include/ordenacao.h"
#include "../include/utils.h"

using namespace std;
using namespace std::chrono;

void benchmarkSortingAlgorithms() {
    int arr[10000];  // Cria um array de 10.000 elementos
    for (int i = 0; i < 10000; i++) {
        arr[i] = rand() % 10000;  // Preenche com números aleatórios
    }

    int arr1[10000];
    int arr2[10000];
    int arr3[10000];

    std::copy(std::begin(arr), std::end(arr), std::begin(arr1));
    std::copy(std::begin(arr), std::end(arr), std::begin(arr2));
    std::copy(std::begin(arr), std::end(arr), std::begin(arr3));

    int n = sizeof(arr) / sizeof(arr[0]);

    // BubbleSort
    auto start = high_resolution_clock::now();
    bubbleSort(arr1, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BubbleSort levou " << duration.count() << " milissegundos" << endl;
    
    // QuickSort
    start = high_resolution_clock::now();
    quickSort(arr2, 0, n - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "QuickSort levou " << duration.count() << " milissegundos" << endl;

    // MergeSort
    start = high_resolution_clock::now();
    mergeSort(arr3, 0, n - 1);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "MergeSort levou " << duration.count() << " milissegundos" << endl;
}