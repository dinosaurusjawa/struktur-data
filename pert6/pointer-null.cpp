#include <iostream>
using namespace std;

int main () 
{
    int n = 0;
    int *p= NULL;
    n = 10;

    cout << "alamat n adalah :" << &n << endl;
    cout << "nilai n adalah :" << n << endl;
    cout << "alamat p adalah :" << &p << endl;
    cout << "nilai p adalah :" << p << endl;
}