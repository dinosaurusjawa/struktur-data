#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; 
}
int main() {
    int n, key, newValue;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Masukkan nilai yang akan dicari: ";
    cin >> key;
    int index = sequentialSearch(arr, n, key);
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