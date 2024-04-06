class Gaji:
    def __init__(self, gaji_per_jam=50000, gaji_per_jam_lembur=15 * 50000):
        self.gaji_per_jam = gaji_per_jam
        self.gaji_per_jam_lembur = gaji_per_jam_lembur

def hitung_gaji(jam_kerja):
    if jam_kerja <= 7:
        return gaji.gaji_per_jam * jam_kerja
    else:
        gaji_reguler = 7 * gaji.gaji_per_jam
        gaji_lembur = (jam_kerja - 7) * gaji.gaji_per_jam_lembur
        return gaji_reguler + gaji_lembur

gaji = Gaji()

jam_kerja = float(input("Masukkan jumlah jam kerja: "))

total_gaji = hitung_gaji(jam_kerja)

print("Total gaji harian adalah:", total_gaji)