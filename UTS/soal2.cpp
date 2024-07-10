#include <iostream>
using namespace std;

int main() {
    double number = 10; // Mendeklarasikan variabel double
    double *ptr;             // Mendeklarasikan pointer ke double

    ptr = &number; // Mendeklarasikan pointer dengan alamt variabel number

    cout << "Nilai dari number :" << number << endl; // Mencetak nilai asli dari number
    // cout << " Alamat dari number :" << &number << endl; // Mencetak alamat memori dari number
    cout << "Nilai yang disimpan di alamat ptr :" << *ptr << endl; // mencetak nilai menggunakan pointer
 
   *ptr = 20; // Mengubah nilai dari variabel yang di tunjul oleh ptr
    cout << " Nilai baru dari number : " << number << endl; // Mencetak nilai baru dari number

return 0;
}   