#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("clear");
    int n, i, arr[50],cari,atas,bawah,tengah;
    cout<<"Masukan Jumlah Angka : ";
    cin>>n;
    cout<<"Masukan "<<n<<" angka :\n";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Masukan angka yang akan dicari :";
    cin>>cari;
    atas = 0;
    bawah = n-1;
    tengah = (atas+bawah)/2;
    while (atas <= bawah)
{
    if(arr[tengah] < cari)
    {
        atas = tengah + 1;
    }
    else if(arr[tengah] == cari)
    {
        cout<<"ditemukan pada lokasi "<<tengah+1<<"\n";
        break;
    }
    else
    {
        bawah = tengah - 1;
    }
    tengah = (atas+atas)/2;
}
if (atas > bawah)
{
    cout<<"Tidak ditemukan!\n"<<cari<<" tidak termasuk dalam inputan. ";
}

}