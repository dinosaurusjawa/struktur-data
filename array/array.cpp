#include <iostream>

using namespace std;

int main(){
    int angka[5];
    angka[0] = 1;
    angka[1] = 10;
    angka[2] = 20;
    angka[3] = 30;
    angka[4] = 40;

    cout << "index array  " << endl;

    for(int i = 0; i < 5; i++){
        cout << "index array ke - " << i << " isinya " << angka[i] << endl;
    }
    return 0;
}