#include <iostream>
#include <algorithm>
using namespace std;

// Fungsi binary search
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
    int n, key, newValue;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array dalam keadaan terurut (ascending):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Masukkan nilai yang akan dicari: ";
    cin >> key;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1) {
        cout << "Nilai ditemukan pada indeks ke-" << index << endl;
        cout << "Masukkan nilai baru: ";
        cin >> newValue;
        arr[index] = newValue;
        cout << "Nilai baru telah berhasil dimasukkan." << endl;
    } else {
        cout << "Nilai tidak ditemukan dalam array." << endl;
    }
    cout << "Array yang dimasukkan:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
