#include <iostream>
#include <cctype>  
#include <string>  
using namespace std;
void hitungKarakter(const string& kalimat) {
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;
    int jumlahNumerik = 0;
    for (char karakter : kalimat) {
        if (isalpha(karakter)) {
            char lowerKarakter = tolower(karakter); 
            if (lowerKarakter == 'a' || lowerKarakter == 'e' || lowerKarakter == 'i' ||
                lowerKarakter == 'o' || lowerKarakter == 'u') {
                jumlahVokal++;
            } else {
                jumlahKonsonan++;
            }
        }
        else if (isdigit(karakter)) {
            jumlahNumerik++;
        }
    }
    cout << "Jumlah vokal: " << jumlahVokal <<endl;
    cout << "Jumlah konsonan: " << jumlahKonsonan << endl;
    cout << "Jumlah karakter numerik: " << jumlahNumerik << endl;
}
int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat); 
    hitungKarakter(kalimat);
    string cari;
    cout << "Masukkan data yang ingin dicari: ";
    cin >> cari;

   
    size_t pos = kalimat.find(cari);
    if (pos != string::npos) {
        cout << "Data ditemukan pada posisi: " << pos << endl;
    } else {
        cout << "Data tidak ada..." << endl;
    }


    return 0;
}