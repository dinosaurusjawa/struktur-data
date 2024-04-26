#include <stdio.h>

// Struktur untuk Tanggal_Lahir
struct Tanggal_Lahir {
    int tanggal;
    int bulan;
    int tahun;
};

// Struktur untuk Alamat
struct Alamat {
    char nama_jalan[50];
    int nomor_rumah;
    char kota[50];
    char provinsi[50];
};

// Struktur untuk Mahasiswa (Mhs)
struct Mhs {
    char nim[15];
    char nama[50];
    struct Alamat alamat;
    char tempat_lahir[50];
    struct Tanggal_Lahir tanggal_lahir;
};

int main() {
    // Deklarasi array dari struct Mhs untuk 3 mahasiswa
    struct Mhs mahasiswa[3];

    // Input data untuk 3 mahasiswa
    for (int i = 0; i < 3; i++) {
        printf("Masukkan data untuk mahasiswa %d:\n", i + 1);
        printf("NIM: ");
        scanf("%s", mahasiswa[i].nim);
        printf("Nama: ");
        scanf(" %[^\n]", mahasiswa[i].nama);
        printf("Alamat\n");
        printf("Nama Jalan: ");
        scanf(" %[^\n]", mahasiswa[i].alamat.nama_jalan);
        printf("Nomor Rumah: ");
        scanf("%d", &mahasiswa[i].alamat.nomor_rumah);
        printf("Kota: ");
        scanf(" %[^\n]", mahasiswa[i].alamat.kota);
        printf("Provinsi: ");
        scanf(" %[^\n]", mahasiswa[i].alamat.provinsi);
        printf("Tempat Lahir: ");
        scanf(" %[^\n]", mahasiswa[i].tempat_lahir);
        printf("Tanggal Lahir (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &mahasiswa[i].tanggal_lahir.tanggal, &mahasiswa[i].tanggal_lahir.bulan, &mahasiswa[i].tanggal_lahir.tahun);
        printf("\n");
    }

    // Output data untuk 3 mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < 3; i++) {
        printf("Mahasiswa %d:\n", i + 1);
        printf("NIM: %s\n", mahasiswa[i].nim);
        printf("Nama: %s\n", mahasiswa[i].nama);
        printf("Alamat: %s No. %d, %s, %s\n", mahasiswa[i].alamat.nama_jalan, mahasiswa[i].alamat.nomor_rumah, mahasiswa[i].alamat.kota, mahasiswa[i].alamat.provinsi);
        printf("Tempat Lahir: %s\n", mahasiswa[i].tempat_lahir);
        printf("Tanggal Lahir: %d/%d/%d\n", mahasiswa[i].tanggal_lahir.tanggal, mahasiswa[i].tanggal_lahir.bulan, mahasiswa[i].tanggal_lahir.tahun);
        printf("\n");
    }

    return 0;
}