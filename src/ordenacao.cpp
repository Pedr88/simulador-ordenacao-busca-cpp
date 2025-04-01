#include "../include/ordenacao.h"
#include <iostream>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high); 
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int linearSearch(int arr[], int n, int key, int& firstIndex, int& lastIndex) {
    int count = 0;
    firstIndex = -1;
    lastIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
            if (firstIndex == -1) firstIndex = i;
            lastIndex = i;
        }
    }

    return count;
}

int binarySearch(int arr[], int left, int right, int key, int& firstIndex, int& lastIndex) {
    int mid;
    firstIndex = -1;
    lastIndex = -1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            firstIndex = mid;
            lastIndex = mid;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (firstIndex == -1) return 0;

    int tempLeft = firstIndex;
    while (tempLeft >= 0 && arr[tempLeft] == key) {
        firstIndex = tempLeft;
        tempLeft--;
    }

    int tempRight = lastIndex;
    while (tempRight < right && arr[tempRight] == key) {
        lastIndex = tempRight;
        tempRight++;
    }

    return (lastIndex - firstIndex + 1);  
}