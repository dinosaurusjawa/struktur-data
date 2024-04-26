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
    // Deklarasi variabel struct Mhs
    struct Mhs mahasiswa;

    // Input data mahasiswa
    printf("Masukkan NIM: ");
    scanf("%s", mahasiswa.nim);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", mahasiswa.nama);
    printf("Masukkan Alamat Anda\n");
    printf("Nama Jalan: ");
    scanf(" %[^\n]", mahasiswa.alamat.nama_jalan);
    printf("Nomor Rumah: ");
    scanf("%d", &mahasiswa.alamat.nomor_rumah);
    printf("Kota: ");
    scanf(" %[^\n]", mahasiswa.alamat.kota);
    printf("Provinsi: ");
    scanf(" %[^\n]", mahasiswa.alamat.provinsi);
    printf("Masukkan Tempat Lahir: ");
    scanf(" %[^\n]", mahasiswa.tempat_lahir);
    printf("Masukkan Tanggal Lahir (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &mahasiswa.tanggal_lahir.tanggal, &mahasiswa.tanggal_lahir.bulan, &mahasiswa.tanggal_lahir.tahun);

    // Output data mahasiswa
    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", mahasiswa.nim);
    printf("Nama: %s\n", mahasiswa.nama);
    printf("Alamat: %s No. %d, %s, %s\n", mahasiswa.alamat.nama_jalan, mahasiswa.alamat.nomor_rumah, mahasiswa.alamat.kota, mahasiswa.alamat.provinsi);
    printf("Tempat Lahir: %s\n", mahasiswa.tempat_lahir);
    printf("Tanggal Lahir: %d/%d/%d\n", mahasiswa.tanggal_lahir.tanggal, mahasiswa.tanggal_lahir.bulan, mahasiswa.tanggal_lahir.tahun);

    return 0;
}