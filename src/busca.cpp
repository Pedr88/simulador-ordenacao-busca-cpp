#include <iostream>
#include <chrono>
#include "../include/ordenacao.h"
#include "../include/utils.h"

using namespace std;
using namespace std::chrono;

void benchmarkSearchingAlgorithms() {
    int arr[500000];
    for (int i = 0; i < 500000; i++) {
        arr[i] = rand() % 500000;
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8888;
    int firstIndex, lastIndex, count;

    // Ordena o array
    quickSort(arr, 0, n - 1);

    // LinearSearch
    auto start = high_resolution_clock::now();
    count = linearSearch(arr, n, key, firstIndex, lastIndex);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Linear Search levou " << duration.count() << " milissegundos e encontrou o valor no indice "
         << firstIndex << " ate o indice " << lastIndex << ", e esse valor se repetiu " << count << " vezes." << endl;

    // BinarySearch
    start = high_resolution_clock::now();
    count = binarySearch(arr, 0, n - 1, key, firstIndex, lastIndex);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Binary Search levou " << duration.count() << " milisegundos e encontrou o valor no indice "
         << firstIndex << " ate o indice " << lastIndex << ", e esse valor se repetiu " << count << " vezes." << endl;
}