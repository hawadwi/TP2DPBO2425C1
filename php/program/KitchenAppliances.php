<?php
require_once "Barang.php";

class KitchenAppliances extends Barang {
    protected $dayaListrik;
    protected $berat;
    protected $warna;
    protected $tipe;

    public function __construct($kode, $nama, $harga, $merk, $garansi, $stok, $gambar,
                                $dayaListrik, $berat, $warna, $tipe) {
        parent::__construct($kode, $nama, $harga, $merk, $garansi, $stok, $gambar);
        $this->dayaListrik = $dayaListrik;
        $this->berat = $berat;
        $this->warna = $warna;
        $this->tipe = $tipe;
    }

    // Getter dan Setter untuk daya listrik
    public function getDayaListrik(): string {
        return $this->dayaListrik;
    }
    public function setDayaListrik(string $dayaListrik): void{
        $this->dayaListrik = $dayaListrik;
    }

    // Getter dan Setter untuk berat
    public function getBerat(): string {
        return $this->berat;
    }
    public function setBerat(string $berat): void{
        $this->berat = $berat;
    }

    // Getter dan Setter untuk warna
    public function getWarna(): string {
        return $this->warna;
    }
    public function setWarna(string $warna): void{
        $this->warna = $warna;
    }

    // Getter dan Setter untuk tipe
    public function getTipe(): string {
        return $this->tipe;
    }
    public function setTipe(string $tipe): void{
        $this->tipe = $tipe;
    }
}
