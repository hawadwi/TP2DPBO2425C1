#include <iostream>
#include <string>
#include "KitchenAppliances.cpp"

using namespace std;

// ini class Microwave, turunan dari KitchenAppliances
class Microwave : public KitchenAppliances{
    public:
    string Model;  // atribut model
    string Kapasitas; // atribut kapasitas
    string DayaKonsumsi; // atribut daya konsumsi

    public:
        // constructor kosong
        Microwave(){
        }
        
        // constructor lengkap, sekalian manggil parent
        Microwave(string kode, string nama, string harga, string merk, string garansi, string stok,
        string DayaListrik, string Berat, string Warna, string Tipe,
        string Model, string Kapasitas, string DayaKonsumsi) : KitchenAppliances(kode, nama, harga, merk, garansi, stok, DayaListrik, Berat, Warna, Tipe){
            this->Model = Model;
            this->Kapasitas = Kapasitas;
            this->DayaKonsumsi = DayaKonsumsi;
        }

        // getter & setter biasa
        string getModel(){ return Model; }
        void setModel(string Model){ this->Model = Model; }

        string getKapasitas(){ return Kapasitas; }
        void setKapasitas(string Kapasitas){ this->Kapasitas = Kapasitas; }

        string getDayaKonsumsi(){ return DayaKonsumsi; }
        void setDayaKonsumsi(string DayaKonsumsi){ this->DayaKonsumsi = DayaKonsumsi; }

        // ini fungsi bantu buat bikin spasi kanan
        string padRight(string spasi, int width) {
            if ((int)spasi.length() >= width) return spasi;
            return spasi + string(width - spasi.length(), ' ');
        }

        // fungsi buat nampilin 1 baris data di tabel
        void tampilkan(int widths[]) {
            cout << "| " << padRight(kode, widths[0])
            << " | " << padRight(nama, widths[1])
            << " | " << padRight(harga, widths[2])
            << " | " << padRight(merk, widths[3])
            << " | " << padRight(garansi, widths[4])
            << " | " << padRight(stok, widths[5])
            << " | " << padRight(DayaListrik, widths[6])
            << " | " << padRight(Berat, widths[7])
            << " | " << padRight(Warna, widths[8])
            << " | " << padRight(Tipe, widths[9])
            << " | " << padRight(Model, widths[10])
            << " | " << padRight(Kapasitas, widths[11])
            << " | " << padRight(getDayaKonsumsi(), widths[12])
            << " |\n";
        }

        // fungsi buat cetak header tabel
        void cetakHeader(int widths[]) {
            cout << "+";
            for (int i = 0; i < 13; i++) cout << string(widths[i] + 2, '-') << "+";
            cout << "\n| "
                << padRight("Kode", widths[0]) << " | "
                << padRight("Nama", widths[1]) << " | "
                << padRight("Harga", widths[2]) << " | "
                << padRight("Merk", widths[3]) << " | "
                << padRight("Garansi", widths[4]) << " | "
                << padRight("Stok", widths[5]) << " | "
                << padRight("DayaListrik", widths[6]) << " | "
                << padRight("Berat", widths[7]) << " | "
                << padRight("Warna", widths[8]) << " | "
                << padRight("Tipe", widths[9]) << " | "
                << padRight("Model", widths[10]) << " | "
                << padRight("Kapasitas", widths[11]) << " | "
                << padRight("DayaKonsumsi", widths[12]) << " |\n";

            cout << "+";
            for (int i = 0; i < 13; i++) cout << string(widths[i] + 2, '-') << "+";
            cout << "\n";
        }

        // fungsi buat nambah barang baru
        // fungsi buat nambah barang baru
        void tambahBarang(Microwave daftar[], int& jumlah, int kapasitas) {
            if (jumlah >= kapasitas) {
                cout << "Data penuh.\n";
                return;
            }

            cout << "\n=== INPUT DATA MICROWAVE ===\n";
            string kode, nama, harga, merk, garansi;
            string stok;
            string DayaListrik, Berat, Warna, Tipe;
            string Model, Kapasitas, DayaKonsumsi;

            // input data barang
            cout << "Kode: "; cin >> kode;

            // cek apakah kode sudah ada
            for (int i = 0; i < jumlah; i++) {
                if (daftar[i].getKode() == kode) {
                    cout << "Barang dengan kode " << kode << " sudah ada, tidak boleh duplikat!\n";
                    return; // langsung batalin tambah
                }
            }

            cout << "Nama: "; cin >> nama;
            cout << "Harga: "; cin >> harga;
            cout << "Merk: "; cin >> merk;
            cout << "Garansi: "; cin >> garansi;
            cout << "Stok: "; cin >> stok;
            cout << "DayaListrik: "; cin >> DayaListrik;
            cout << "Berat: "; cin >> Berat;
            cout << "Warna: "; cin >> Warna;
            cout << "Tipe: "; cin >> Tipe;
            cout << "Model: "; cin >> Model;
            cout << "Kapasitas: "; cin >> Kapasitas;
            cout << "DayaKonsumsi: "; cin >> DayaKonsumsi;

            // kalau aman, baru simpan ke array
            daftar[jumlah] = Microwave(kode, nama, harga, merk, garansi, stok,
                            DayaListrik, Berat, Warna, Tipe,
                            Model, Kapasitas, DayaKonsumsi);
            jumlah++;
            cout << "Barang berhasil ditambahkan.\n";
        }

};
