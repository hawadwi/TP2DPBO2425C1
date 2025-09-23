<?php
require_once "KitchenAppliances.php";

class Microwave extends KitchenAppliances {
    private $model;
    private $kapasitas;
    private $dayaKonsumsi;

    public function __construct($kode, $nama, $harga, $merk, $garansi, $stok, $gambar,
                                $dayaListrik, $berat, $warna, $tipe,
                                $model, $kapasitas, $dayaKonsumsi) {
        parent::__construct($kode, $nama, $harga, $merk, $garansi, $stok, $gambar, 
                            $dayaListrik, $berat, $warna, $tipe);
        $this->model = $model;
        $this->kapasitas = $kapasitas;
        $this->dayaKonsumsi = $dayaKonsumsi;
    }

    // Getter dan Setter untuk model
    public function getModel(): string {
        return $this->model;
    }
    public function setModel(string $model): void{
        $this->model = $model;
    }

    // Getter dan Setter untuk kapasitas
    public function getKapasitas(): string {
        return $this->kapasitas;
    }
    public function setKapasitas(string $kapasitas): void{
        $this->kapasitas = $kapasitas;
    }

    // Getter dan Setter untuk daya konsumsi
    public function getDayaKonsumsi(): string {
        return $this->dayaKonsumsi;
    }
    public function setDayaKonsumsi(string $dayaKonsumsi): void{
        $this->dayaKonsumsi = $dayaKonsumsi;
    }

    public function asArray() {
    // nah ini fungsinya buat ngumpulin semua data objek jadi array
    // semacam kumpulin semua atribut ke dalam satu array biar gampang ditampilin di tabel atau di-echo.
    return [
        $this->getKode(),       
        $this->getNama(),      
        $this->getHarga(),    
        $this->getMerk(),       
        $this->getGaransi(),   
        $this->getStok(),     
        $this->getGambar(),   
        $this->getDayaListrik(),
        $this->getBerat(), 
        $this->getWarna(),   
        $this->getTipe(),  
        $this->model, 
        $this->kapasitas,     
        $this->dayaKonsumsi 
    ];
}

}
