#include <stdio.h>

// Mendefinisikan struct untuk data karyawan
struct Karyawan {
    char nama[50];
    int jam_kerja;
};

int main() {
    // Deklarasi variabel struct
    struct Karyawan karyawan;

    // Input data karyawan
    printf("Masukkan nama karyawan: ");
    scanf("%[^\n]", karyawan.nama);
    printf("Masukkan jumlah jam kerja: ");
    scanf("%d", &karyawan.jam_kerja);

    // Menghitung gaji
    int gaji_perjam = 50000;
    int gaji;
    if (karyawan.jam_kerja > 7) {
        // Menghitung gaji lembur
        int jam_lembur = karyawan.jam_kerja - 7;
        gaji = (7 * gaji_perjam) + (jam_lembur * (15 * gaji_perjam));
    } else {
        gaji = karyawan.jam_kerja * gaji_perjam;
    }

    // Output gaji
    printf("Gaji harian untuk %s adalah: Rp %d\n", karyawan.nama, gaji);

    return 0;
}