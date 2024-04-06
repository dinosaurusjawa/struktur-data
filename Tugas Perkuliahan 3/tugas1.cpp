#include <iostream>

class Gaji {
public:
    Gaji(int gaji_per_jam = 50000, int gaji_per_jam_lembur = 15 * 50000) :
        gaji_per_jam(gaji_per_jam), gaji_per_jam_lembur(gaji_per_jam_lembur) {}

    int hitungGaji(float jam_kerja) {
        if (jam_kerja <= 7) {
            return gaji_per_jam * jam_kerja;
        } else {
            int gaji_reguler = 7 * gaji_per_jam;
            int gaji_lembur = (jam_kerja - 7) * gaji_per_jam_lembur;
            return gaji_reguler + gaji_lembur;
        }
    }

private:
    int gaji_per_jam;
    int gaji_per_jam_lembur;
};

int main() {
    Gaji gaji;

    float jam_kerja;
    std::cout << "Masukkan jumlah jam kerja: ";
    std::cin >> jam_kerja;

    int total_gaji = gaji.hitungGaji(jam_kerja);

    std::cout << "Total gaji harian adalah: " << total_gaji << std::endl;

    return 0;
}