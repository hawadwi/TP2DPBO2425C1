#include <iostream>

using namespace std;

/* Class untuk menyimpan data barang di toko Semua data barang 
disimpan dalam variabel private supaya aman */
class Barang{
    protected:
        // Data-data barang yang disimpan sebagai private
        // Kenapa private? Supaya tidak bisa diubah sembarangan dari luar class
        string kode; // Kode unik barang
        string nama;  // Nama barang
        string harga; // Harga barang 
        string merk; // Merk barang
        string garansi;  // Lama garansi
        string stok; // Jumlah barang yang tersedia

    public:
        // Constructor kosong - bikin objek barang dengan data kosong
        // Dipake kalau mau bikin array barang tapi belum tau isinya, karena datanya di isi oleh user
        Barang() {
            kode = "";
            nama = "";
            harga = "";
            merk = "";
            garansi = "";
            stok = "";
        }

        // Constructor lengkap - langsung isi semua data barang sekaligus
        // Dipake kalau udah tau semua data barangnya
        Barang(string kode, string nama, string harga, string merk, string garansi, string stok){
            this->kode = kode;
            this->nama = nama;
            this->harga = harga;
            this->merk = merk;
            this->garansi = garansi;
            this->stok = stok;
        }

        // Getter dan Setter - cara aman untuk akses data private
        // Getter untuk ambil data, Setter untuk ubah data
        string getKode(){
            return kode;
        }

        void setKode(string kode){
            this->kode = kode;
        }

        string getNama(){
            return nama;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getHarga(){
            return harga;
        }

        void setHarga(string harga){
            this->harga = harga;
        }

        string getMerk(){
            return merk;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        string getGaransi(){
            return garansi;
        }

        void setGaransi(string garansi){
            this->garansi = garansi;
        }

        string getStok(){
            return stok;
        }

        void setStok(string stok){
            this->stok = stok;
        }

};