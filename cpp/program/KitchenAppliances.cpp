#include <iostream>
#include "Barang.cpp"

using namespace std;

// class KitchenAppliances (Child) dari class Barang (Parent)
class KitchenAppliances : public Barang{
    // atribut private
    protected:
        string DayaListrik; // atribut DayaListrik
        string Berat; // atribut Berat
        string Warna; // atribut Warna
        string Tipe; // atribut tipe 

    public:
        KitchenAppliances(){
        
        }
        
        // saat membuat constructor pada class child,
        // maka harus memanggil constructor pada class parent
        KitchenAppliances(string kode, string nama, 
        string harga, string merk, string garansi, string stok, string DayaListrik, string Berat, 
        string Warna, string Tipe) : Barang(kode, nama, harga, merk, garansi, stok){
            this->DayaListrik = DayaListrik;
            this->Berat = Berat;
            this->Warna = Warna;
            this->Tipe = Tipe;
        }

        string getDayaListrik(){
            return DayaListrik;
        }

        void setDayaListrik(string DayaListrik){
            this->DayaListrik = DayaListrik;
        }

        string getBerat(){
            return Berat;
        }

        void setBerat(string Berat){
            this->Berat = Berat;
        }

        string getWarna(){
            return Warna;
        }

        void setWarna(string Warna){
            this->Warna = Warna;
        }

        string getTipe(){
            return Tipe;
        }

        void setTipe(string Tipe){
            this->Tipe = Tipe;
        }
};