#include <iostream>
#include <string>

using namespace std;

struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

struct Alamat {
    string namaJalan;
    string nomorRumah;
    string kota;
    string provinsi;
};

struct Mhs {
    int nim;
    string nama;
    Alamat alamat;
    string tempat;
    TanggalLahir tanggalLahir;
};

int main() {
    Mhs mahasiswa[2]; 

    for (int i = 0; i < 2; ++i) {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << ":\n";
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cin.ignore();
        cout << "Nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Alamat (Nama Jalan): ";
        getline(cin, mahasiswa[i].alamat.namaJalan);
        cout << "Alamat (Nomor Rumah): ";
        getline(cin, mahasiswa[i].alamat.nomorRumah);
        cout << "Alamat (Kota): ";
        getline(cin, mahasiswa[i].alamat.kota);
        cout << "Alamat (Provinsi): ";
        getline(cin, mahasiswa[i].alamat.provinsi);
        cout << "Tempat Lahir: ";
        getline(cin, mahasiswa[i].tempat);
        cout << "Tanggal Lahir (Tanggal Bulan Tahun): ";
        cin >> mahasiswa[i].tanggalLahir.tanggal >> mahasiswa[i].tanggalLahir.bulan >> mahasiswa[i].tanggalLahir.tahun;
        cout << endl;
    }

    cout << "Data Mahasiswa:\n";
    for (int i = 0; i < 2; ++i) {
        cout << "Mahasiswa ke-" << i + 1 << ":\n";
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Alamat: " << mahasiswa[i].alamat.namaJalan << " " << mahasiswa[i].alamat.nomorRumah << ", " 
             << mahasiswa[i].alamat.kota << ", " << mahasiswa[i].alamat.provinsi << endl;
        cout << "Tempat Lahir: " << mahasiswa[i].tempat << endl;
        cout << "Tanggal Lahir: " << mahasiswa[i].tanggalLahir.tanggal << "/" << mahasiswa[i].tanggalLahir.bulan 
             << "/" << mahasiswa[i].tanggalLahir.tahun << endl;
        cout << endl;
    }

    return 0;
}