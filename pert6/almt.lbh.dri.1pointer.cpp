#include <iostream>
using namespace std;

int main() {
    int value =15;
    int *ptr1 = &value; //pointer ptr1 menunjuk ke value
    int *ptr2 = ptr1; // pointer ptr2 juga menunjuk ke value

    cout << "Nilai asli " << *ptr1 << endl; //menampilkan nilai melalui ptr1
    //melalui nilai ptr2
    *ptr2 = 20;

    cout << " Nilai setelah di ubah melalui ptr2 : " << *ptr1 << endl;
    //menampilkan nilai baru
    cout << " Alamat yang di tunjuk ptr1 : " << ptr1 << endl;
    cout << " Alamat yang di tunjuk ptr2 : " << ptr2 << endl;

    return 0;
}