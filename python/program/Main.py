from Microwave import Microwave

# fungsi buat cetak tabel
def print_table(daftar_barang):
    headers = [
        "Kode", "Nama", "Harga", "Merk", "Garansi", "Stok",
        "DayaListrik", "Berat", "Warna", "Tipe",
        "Model", "Kapasitas", "DayaKonsumsi"
    ]

    # tentuin lebar kolom sesuai header
    widths = [len(h) for h in headers]

    # sesuaikan sama panjang data juga
    for m in daftar_barang:
        values = m.as_list()
        for i in range(len(values)):
            if len(values[i]) > widths[i]:
                widths[i] = len(values[i])

    # bikin garis pembatas
    line = "+"
    for w in widths:
        line += "-" * (w + 2) + "+"
    print(line)

    # cetak header
    print("| " + " | ".join([headers[i].ljust(widths[i]) for i in range(len(headers))]) + " |")
    print(line)

    # cetak isi data
    for m in daftar_barang:
        values = m.as_list()
        print("| " + " | ".join([values[i].ljust(widths[i]) for i in range(len(values))]) + " |")
    print(line)


def main():
    daftar_barang = []

    # data awal
    daftar_barang.append(Microwave("MW001", "Microwave", "1.500.000", "Sharp", "1 Tahun", "10",
                                   "800W", "12kg", "Putih", "Home", "R-930", "20L", "700W"))
    daftar_barang.append(Microwave("MW002", "Microwave", "1.700.000", "Samsung", "2 Tahun", "5",
                                   "900W", "13kg", "Hitam", "Home", "MW-S900", "25L", "845W"))
    daftar_barang.append(Microwave("MW003", "Microwave", "1.600.000", "Panasonic", "1 Tahun", "8",
                                   "850W", "11kg", "Silver", "Portable", "NN-ST34", "22L", "710W"))
    daftar_barang.append(Microwave("MW004", "Microwave", "1.800.000", "LG", "2 Tahun", "7",
                                   "950W", "14kg", "Putih", "Industrial", "MS2042DB", "23L", "900W"))
    daftar_barang.append(Microwave("MW005", "Microwave", "1.400.000", "Toshiba", "1 Tahun", "12",
                                   "750W", "10kg", "Hitam", "Home", "ER-SGM23", "18L", "710W"))

    while True:
        print("\n=== Menu Toko Elektronik ===")
        print("1. Tambah Barang")
        print("2. Tampilkan Semua Barang (Tabel)")
        print("3. Keluar")
        pilihan = input("Pilih menu: ")

        if pilihan == "1":
            kode = input("Kode    : ")

            # cek kode duplikat (tanpa break)
            duplikat = False
            for barang in daftar_barang:
                if barang.getKode().lower() == kode.lower():
                    duplikat = True
            if duplikat:
                print(f"Barang dengan kode {kode} sudah ada, tidak boleh duplikat!")
                continue

            nama = input("Nama    : ")
            harga = input("Harga   : ")
            merk = input("Merk    : ")
            garansi = input("Garansi : ")
            stok = input("Stok    : ")
            daya_listrik = input("Daya Listrik : ")
            berat = input("Berat        : ")
            warna = input("Warna        : ")
            tipe = input("Tipe         : ")
            model = input("Model        : ")
            kapasitas = input("Kapasitas    : ")
            daya_konsumsi = input("Daya Konsumsi: ")

            daftar_barang.append(Microwave(kode, nama, harga, merk, garansi, stok,
                                           daya_listrik, berat, warna, tipe,
                                           model, kapasitas, daya_konsumsi))
            print("Barang berhasil ditambahkan.")

        elif pilihan == "2":
            if not daftar_barang:
                print("Belum ada data barang.")
            else:
                print_table(daftar_barang)

        elif pilihan == "3":
            print("Terima kasih!")
            break

        else:
            print("Pilihan tidak valid.")


if __name__ == "__main__":
    main()
