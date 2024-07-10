// Soal nomor 1. Program Algoritma Bubble Sort

#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan Bubble Sort dan menampilkan array di setiap tahap
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Tahap " << i + 1 << ": ";
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        // Menampilkan array setelah setiap iterasi dari loop luar
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menampilkan array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah elemen dalam array
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menampilkan array sebelum diurutkan
    cout << "Array sebelum diurutkan: ";
    displayArray(arr, n);

    // Mengurutkan array menggunakan Bubble Sort dan menampilkan setiap tahap
    bubbleSort(arr, n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    displayArray(arr, n);

    return 0;
}
