public class KitchenAppliances extends Barang {
    // ini atribut tambahan khusus kitchen appliances
    private String dayaListrik;
    private String berat;
    private String warna;
    private String tipe;

    // constructor, jadi pas bikin objek kita masukin data dari parent + atribut baru
    public KitchenAppliances(String kode, String nama, String harga, String merk, String garansi, String stok,
                             String dayaListrik, String berat, String warna, String tipe) {
        super(kode, nama, harga, merk, garansi, stok); // manggil constructor parent
        this.dayaListrik = dayaListrik;
        this.berat = berat;
        this.warna = warna;
        this.tipe = tipe;
    }

    // getter sama setter biar bisa akses dan ubah data
    public String getDayaListrik() {
      return this.dayaListrik;
   }

   public void setDayaListrik(String dayaListrik) {
      this.dayaListrik = dayaListrik;
   }

   public String getBerat() {
      return this.berat;
   }

   public void setBerat(String berat) {
      this.berat = berat;
   }

   public String getWarna() {
      return this.warna;
   }

   public void setWarna(String warna) {
      this.warna = warna;
   }

   public String getTipe() {
      return this.tipe;
   }

   public void setTipe(String tipe) {
      this.tipe = tipe;
   }
}
