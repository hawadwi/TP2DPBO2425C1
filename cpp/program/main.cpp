#include <iostream>
#include <string>
#include "Microwave.cpp"

using namespace std;

int main() {
    int kapasitas = 100; // batas maksimal data
    Microwave daftar[kapasitas];  // array untuk simpan barang
    int jumlah = 0;  // counter jumlah data

    // data awal (hardcode)
    daftar[jumlah++] = Microwave("MW001", "Microwave", "1.500.000", "Sharp", "1 Tahun", "10",
                                "800W", "12kg", "Putih", "Home",
                                "R-930", "20L", "700W");
    daftar[jumlah++] = Microwave("MW002", "Microwave", "1.700.000", "Samsung", "2 Tahun", "5",
                                "900W", "13kg", "Hitam", "Home",
                                "MW-S900", "25L", "845W");
    daftar[jumlah++] = Microwave("MW003", "Microwave", "1.600.000", "Panasonic", "1 Tahun", "8",
                                "850W", "11kg", "Silver", "Portable",
                                "NN-ST34", "22L", "710W");
    daftar[jumlah++] = Microwave("MW004", "Microwave", "1.800.000", "LG", "2 Tahun", "7",
                                "950W", "14kg", "Putih", "Home",
                                "MS2042DB", "23L", "900W");
    daftar[jumlah++] = Microwave("MW005", "Microwave", "1.400.000", "Toshiba", "1 Tahun", "12",
                                "750W", "10kg", "Hitam", "Industrial",
                                "ER-SGM23", "18L", "710W");

    int pilihan;
    do {
        cout << "\n=== MENU MICROWAVE ===\n";
        cout << "1. Tampilkan Daftar Barang\n";
        cout << "2. Tambah Barang Baru\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (jumlah == 0) {
                cout << "Belum ada data barang.\n";
            } else {
                // Header kolom
                string headers[13] = {
                    "Kode", "Nama", "Harga", "Merk", "Garansi", "Stok",
                    "DayaListrik", "Berat", "Warna", "Tipe",
                    "Model", "Kapasitas", "DayaKonsumsi"
                };

                // Inisialisasi lebar dengan panjang header
                int widths[13];
                for (int i = 0; i < 13; i++) {
                    widths[i] = headers[i].length();
                }

                // Sesuaikan lebar kolom dengan data terpanjang
                for (int i = 0; i < jumlah; i++) {
                    widths[0]  = max(widths[0], (int)daftar[i].getKode().length());
                    widths[1]  = max(widths[1], (int)daftar[i].getNama().length());
                    widths[2]  = max(widths[2], (int)daftar[i].getHarga().length());
                    widths[3]  = max(widths[3], (int)daftar[i].getMerk().length());
                    widths[4]  = max(widths[4], (int)daftar[i].getGaransi().length());
                    widths[5]  = max(widths[5], (int)daftar[i].getStok().length());
                    widths[6]  = max(widths[6], (int)daftar[i].getDayaListrik().length());
                    widths[7]  = max(widths[7], (int)daftar[i].getBerat().length());
                    widths[8]  = max(widths[8], (int)daftar[i].getWarna().length());
                    widths[9]  = max(widths[9], (int)daftar[i].getTipe().length());
                    widths[10] = max(widths[10], (int)daftar[i].getModel().length());
                    widths[11] = max(widths[11], (int)daftar[i].getKapasitas().length());
                    widths[12] = max(widths[12], (int)daftar[i].getDayaKonsumsi().length());
                }

                // Cetak header tabel
                daftar[0].cetakHeader(widths);

                // Cetak isi tabel
                for (int i = 0; i < jumlah; i++) {
                    daftar[i].tampilkan(widths);
                }

                // Cetak footer tabel
                cout << "+";
                for (int i = 0; i < 13; i++) {
                    cout << string(widths[i] + 2, '-') << "+";
                }
                cout << "\n";
            }
        } else if (pilihan == 2) {
            daftar[0].tambahBarang(daftar, jumlah, kapasitas); // fungsi sudah ada cek duplikat
        } else if (pilihan == 3) {
            cout << "Keluar program...\n";
        } else {
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);

    return 0;
}
