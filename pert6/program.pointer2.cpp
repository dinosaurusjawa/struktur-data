#include <iostream>
using namespace std;

int main () {
    //deklarasi variabel
    int x;
    int *a;
    x = 7;
    a = &x;

    cout << "Alamat x adalah " << &x << endl;
    cout << "Nilai x adalah " << x << endl;
    cout << "Alamat a adalah " << &a << endl;
    cout << "Nilai a adalah " << a << endl;
    cout << "Nilai *a adalah " << *a << endl;
}