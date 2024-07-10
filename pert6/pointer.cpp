#include <iostream>
using namespace std;

int main(){
    int var = 10;
    int *ptr;   //deklarasi pointer
    ptr = &var; // Mgeinisialisasi pointer dengan alamat dari var setelah deklarasi

    cout << "Nilai dari var :" << *ptr << endl; //Menampilkan nilai menggunakan pointer
    cout << "Alamat dari var :" << ptr << endl; //Menampilkan Alamat menggunakan pointer

    return 0;
}