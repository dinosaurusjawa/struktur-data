#include <iostream>
#include <algorithm>
using namespace std;
int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main() {
    int n, key, choice;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array dalam keadaan terurut (ascending):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Pilih metode pencarian:" << endl;
    cout << "1. Sequential Search" << endl;
    cout << "2. Binary Search" << endl;
    cout << "Pilihan Anda: ";
    cin >> choice;
    cout << "Masukkan nilai yang akan dicari: ";
    cin >> key;

    switch(choice) {
        case 1: {
            int indexSeq = sequentialSearch(arr, n, key);
            if (indexSeq != -1) {
                cout << "Nilai ditemukan pada indeks ke-" << indexSeq << " (menggunakan Sequential Search)." << endl;
            } else {
                cout << "Nilai tidak ditemukan dalam array (menggunakan Sequential Search)." << endl;
            }
            break;
        }
        case 2: {
            sort(arr, arr + n);
            int indexBin = binarySearch(arr, 0, n - 1, key);
            if (indexBin != -1) {
                cout << "Nilai ditemukan pada indeks ke-" << indexBin << " (menggunakan Binary Search)." << endl;
            } else {
                cout << "Nilai tidak ditemukan dalam array (menggunakan Binary Search)." << endl;
            }
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
