#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    system("clear");
    int n,i,cari,arr[50];
    cout << "Masukan Jumlah Angka: \n";
    cin >> n ;
    cout << "Masukan "<<n<<" Angka :\n";
    for (i=0;i<n;i++){
        cin >> arr [i];
    }
    cout << "Masukan Angka Yang Dicari : ";
    cin >> cari;
    for (i=0;i<n;i++){
        if (arr[i]==cari){
            cout<<" ditemukan Pada lokasi "<< i+1;
        }
        if (i==0){
        cout<<"Tidak Ditemukan !\n"<< cari << "tidak termasuk dalam inputan";
    }
    }
    

}