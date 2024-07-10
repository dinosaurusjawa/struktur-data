#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Fungsi untuk menghitung jumlah konsonan dalam sebuah string
int hitungKonsonan(const string& kalimat) {
    int jumlah = 0;
    for (char karakter : kalimat) {
        if (isalpha(karakter) && !isVowel(tolower(karakter))) {
            jumlah++;
        }
    }
    return jumlah;
}

// Fungsi untuk menghitung jumlah vokal dalam sebuah string
int hitungVokal(const string& kalimat) {
    int jumlah = 0;
    for (char karakter : kalimat) {
        if (isalpha(karakter) && (tolower(karakter))) {
            jumlah++;
        }
    }
    return jumlah;
}

// Fungsi untuk menghitung jumlah karakter numerik dalam sebuah string
int hitungNumerik(const string& kalimat) {
    int jumlah = 0;
    for (char karakter : kalimat) {
        if (isdigit(karakter)) {
            jumlah++;
        }
    }
    return jumlah;
}

// Fungsi untuk mengecek apakah sebuah karakter adalah vokal
bool isVowel(char karakter) {
    return karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u';
}

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Menghitung jumlah konsonan, vokal, dan karakter numerik dalam kalimat
    int konsonan = hitungKonsonan(kalimat);
    int vokal = hitungVokal(kalimat);
    int numerik = hitungNumerik(kalimat);

    cout << "Jumlah konsonan: " << konsonan << endl;
    cout << "Jumlah vokal: " << vokal << endl;
    cout << "Jumlah karakter numerik: " << numerik << endl;

    // Mencari data dalam kalimat
    string cari;
    cout << "Masukkan data yang ingin dicari: ";
    cin >> cari;

    // Mencari data dalam kalimat
    size_t pos = kalimat.find(cari);
    if (pos != string::npos) {
        cout << "Data ditemukan pada posisi: " << pos << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}
