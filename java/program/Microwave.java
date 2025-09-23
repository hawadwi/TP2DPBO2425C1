public class Microwave extends KitchenAppliances {
    // tambah atribut khusus microwave
    private String model;
    private String kapasitas;
    private String dayaKonsumsi;

    // constructor, langsung panggil constructor parent (KitchenAppliances)
    public Microwave(String kode, String nama, String harga, String merk, String garansi, String stok,
                     String dayaListrik, String berat, String warna, String tipe,
                     String model, String kapasitas, String dayaKonsumsi) {
        super(kode, nama, harga, merk, garansi, stok, dayaListrik, berat, warna, tipe);
        this.model = model;
        this.kapasitas = kapasitas;
        this.dayaKonsumsi = dayaKonsumsi;
    }

    // getter setter buat masing-masing atribut
    public String getModel() {
      return this.model;
   }

   public void setModel(String model) {
      this.model = model;
   }

   public String getKapasitas() {
      return this.kapasitas;
   }

   public void setKapasitas(String kapasitas) {
      this.kapasitas = kapasitas;
   }

   public String getDayaKonsumsi() {
      return this.dayaKonsumsi;
   }

   public void setDayaKonsumsi(String dayaKonsumsi) {
      this.dayaKonsumsi = dayaKonsumsi;
   }

   // method asArray biar gampang kalo mau ditampilin di tabel (Main.java pake ini)
    public String[] asArray() {
        return new String[] {
            getKode(), getNama(), getHarga(), getMerk(), getGaransi(), getStok(),
            getDayaListrik(), getBerat(), getWarna(), getTipe(),
            getModel(), getKapasitas(), getDayaKonsumsi()
        };
    }
}
