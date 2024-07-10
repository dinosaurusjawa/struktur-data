class Mahasiswa:
    def __init__(self, nim, nama, alamat, tempat_lahir, tanggal_lahir):
        self.nim = nim
        self.nama = nama
        self.alamat = alamat
        self.tempat_lahir = tempat_lahir
        self.tanggal_lahir = tanggal_lahir

class Alamat:
    def __init__(self, nama_jalan, nomor_rumah, kota, kabupaten, provinsi):
        self.nama_jalan = nama_jalan
        self.nomor_rumah = nomor_rumah
        self.kota = kota
        self.kabupaten = kabupaten
        self.provinsi = provinsi

class TanggalLahir:
    def __init__(self, tanggal, bulan, tahun):
        self.tanggal = tanggal
        self.bulan = bulan
        self.tahun = tahun

def input_alamat():
    nama_jalan = input("Masukkan Nama Jalan : ")
    nomor_rumah = input("Masukkan Nomor Rumah : ")
    kota = input("Masukkan Kota : ")
    kabupaten = input("Masukkan Kabupaten : ")
    provinsi = input("Masukkan Provinsi : ")
    return Alamat (nama_jalan, nomor_rumah, kota, kabupaten, provinsi)

def input_tanggal_lahir():
    tanggal = input("Masukkan Tanggal : ")
    bulan = input("Masukkan Bulan : ")
    tahun = input("Masukkan Tahun : ")
    return TanggalLahir(tanggal, bulan, tahun)

def input_data_mahasiswa():
    nim = input("Masukkan NIM : ")
    nama = input("Masukkan Nama : ")
    alamat = input_alamat()
    tempat_lahir = input("Masukkan Tempat Lahir : ")
    tanggal_lahir = input_tanggal_lahir()
    return Mahasiswa(nim, nama, alamat, tempat_lahir, tanggal_lahir)


mahasiswa = []

for i in range(2):
    print(f"Masukkan Data Mahasiswa ke-{i+1} :")
    mhs = input_data_mahasiswa()
    mahasiswa.append(mhs)
    print()

print ("Data Mahasiswa")
for i, mhs in enumerate(mahasiswa):
    print(f"Mahasiwa ke-{i+1}: ")
    print("NIM :", mhs.nim)
    print("Nama :", mhs.nama)
    print("Alamat :", mhs.alamat.nama_jalan, mhs.alamat.nomor_rumah, mhs.alamat.kota, mhs.alamat.kabupaten, mhs.alamat.provinsi)
    print("Tempat Lahir: ", mhs.tempat_lahir)
    print("Tanggal Lahir: ", mhs.tanggal_lahir.tanggal, mhs.tanggal_lahir.bulan, mhs.tanggal_lahir.tahun)
    print()