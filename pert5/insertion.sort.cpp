#include <iostream>

// Fungsi untuk melakukan insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Pindahkan elemen dari arr[0..i-1], yang lebih besar dari key,
        // ke satu posisi di depan posisi mereka saat ini
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Fungsi untuk menampilkan array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sebelum diurutkan: \n";
    printArray(arr, n);

    insertionSort(arr, n);

    std::cout << "Array setelah diurutkan: \n";
    printArray(arr, n);
    
    return 0;
}
