<?php
require_once "Microwave.php";

// bikin fungsi buat nampilin tabel
function printTable($daftarBarang) {
    // ini bagian HTML sama CSS biar tabelnya rapi
    echo '<!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <h1 style="text-align: center;">Daftar Microwave</h1>
        <style>
            body { font-family: Arial, sans-serif; margin: 20px; }
            table { border-collapse: collapse; width: 100%; }
            th, td { border: 1px solid #000000ff; padding: 8px; text-align: center; }
            th { background-color: #98c7cfff; }
            img { width: 100px; height: auto; }
        </style>
    </head>
    <body>
    <table>
        <tr>
            <th>Kode</th><th>Nama</th><th>Harga</th><th>Merk</th>
            <th>Garansi</th><th>Stok</th><th>Foto</th>
            <th>Daya Listrik</th><th>Berat</th><th>Warna</th><th>Tipe</th>
            <th>Model</th><th>Kapasitas</th><th>Daya Konsumsi</th>
        </tr>';

    // looping semua data microwave
    foreach ($daftarBarang as $barang) {
        $values = $barang->asArray();
        echo "<tr>";
        // cek tiap kolom
        for ($i = 0; $i < count($values); $i++) {
            if ($i == 6) { // kalau kolom foto, tampilinnya jadi gambar
                echo "<td><img src='images/".$values[$i]."' alt='".$values[1]."'></td>";
            } else { // sisanya tampil biasa aja
                echo "<td>".$values[$i]."</td>";
            }
        }
        echo "</tr>";
    }

    // nutup tabel sama HTML
    echo "</table>
    </body>
    </html>";
}

// di bawah ini data microwavenya hardcode aja biar langsung muncul
$daftarBarang = [
    new Microwave("MW001", "Microwave", "1.500.000", "Sharp", "1 Tahun", "10", "sharp.jpg",
                  "800W", "12kg", "Putih", "Home",
                  "R-930", "20L", "700W"),
    new Microwave("MW002", "Microwave", "1.700.000", "Samsung", "2 Tahun", "5", "samsung.jpg",
                  "900W", "13kg", "Hitam", "Home",
                  "MW-S900", "25L", "845W"),
    new Microwave("MW003", "Microwave", "1.600.000", "Panasonic", "1 Tahun", "8", "panasonic.jpg",
                  "850W", "11kg", "Silver", "Portable",
                  "NN-ST34", "22L", "710W"),
    new Microwave("MW004", "Microwave", "1.800.000", "LG", "2 Tahun", "7", "lg.jpg",
                  "950W", "14kg", "Putih", "Industrial",
                  "MS2042DB", "23L", "900W"),
    new Microwave("MW005", "Microwave", "1.400.000", "Toshiba", "1 Tahun", "12", "toshiba.jpg",
                  "750W", "10kg", "Hitam", "Home",
                  "ER-SGM23", "18L", "710W")
];

// terakhir panggil fungsi buat nampilin tabel
printTable($daftarBarang);
