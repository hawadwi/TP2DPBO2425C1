import java.util.Scanner;

public class Barang {
   // ini atribut barang, isinya data dasar yang biasanya dimiliki barang
   private String kode;
   private String nama;
   private String harga;
   private String merk;
   private String garansi;
   private String stok;

   // constructor, jadi pas bikin objek langsung bisa masukin data
   public Barang(String kode, String nama, String harga, String merk, String garansi, String stok) {
      this.kode = kode;
      this.nama = nama;
      this.harga = harga;
      this.merk = merk;
      this.garansi = garansi;
      this.stok = stok;
   }

   // di bawah ini getter sama setter, biar bisa ambil atau ubah data
   public String getKode() {
      return this.kode;
   }

   public void setKode(String kode) {
      this.kode = kode;
   }

   public String getNama() {
      return this.nama;
   }

   public void setNama(String nama) {
      this.nama = nama;
   }

   public String getHarga() {
      return this.harga;
   }

   public void setHarga(String harga) {
      this.harga = harga;
   }

   public String getMerk() {
      return this.merk;
   }

   public void setMerk(String merk) {
      this.merk = merk;
   }

   public String getGaransi() {
      return this.garansi;
   }

   public void setGaransi(String garansi) {
      this.garansi = garansi;
   }

   public String getStok() {
      return this.stok;
   }

   public void setStok(String stok) {
      this.stok = stok;
   }

}
