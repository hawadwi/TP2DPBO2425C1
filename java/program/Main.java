import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // fungsi buat nampilin tabel biar data keliatan rapi
    public static void printTable(ArrayList<Microwave> daftarBarang) {
        String[] headers = {
            "Kode", "Nama", "Harga", "Merk", "Garansi", "Stok",
            "DayaListrik", "Berat", "Warna", "Tipe",
            "Model", "Kapasitas", "DayaKonsumsi"
        };

        // nyimpen lebar tiap kolom
        int[] widths = new int[headers.length];
        for (int i = 0; i < headers.length; i++) {
            widths[i] = headers[i].length();
        }

        // cari panjang max dari data biar kolom ga kepotong
        for (Microwave m : daftarBarang) {
            String[] values = m.asArray();
            for (int i = 0; i < values.length; i++) {
                if (values[i].length() > widths[i]) {
                    widths[i] = values[i].length();
                }
            }
        }

        // jaga-jaga header juga dicek
        for (int i = 0; i < headers.length; i++) {
            if (headers[i].length() > widths[i]) {
                widths[i] = headers[i].length();
            }
        }

        // bikin garis tabel
        String line = "+";
        for (int w : widths) line += "-".repeat(w + 2) + "+";
        System.out.println(line);

        // cetak header tabel
        System.out.print("| ");
        for (int i = 0; i < headers.length; i++) {
            System.out.print(String.format("%-" + widths[i] + "s", headers[i]) + " | ");
        }
        System.out.println();
        System.out.println(line);

        // cetak data satu per satu
        for (Microwave m : daftarBarang) {
            String[] values = m.asArray();
            System.out.print("| ");
            for (int i = 0; i < values.length; i++) {
                System.out.print(String.format("%-" + widths[i] + "s", values[i]) + " | ");
            }
            System.out.println();
        }
        System.out.println(line);
    }

    // fungsi buat nyari kode, kalau ketemu balikin index
    public static int cariKode(ArrayList<Microwave> daftarBarang, String kode) {
        for (int i = 0; i < daftarBarang.size(); i++) {
            if (daftarBarang.get(i).getKode().equalsIgnoreCase(kode)) {
                return i; // ketemu
            }
        }
        return -1; // ga ketemu
    }

    public static void main(String[] args) {
        ArrayList<Microwave> daftarBarang = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        // masukin 5 data default dulu
        daftarBarang.add(new Microwave("MW001", "Microwave", "1.500.000", "Sharp", "1 Tahun", "10",
                "800W", "12kg", "Putih", "Home", "R-930", "20L", "700W"));
        daftarBarang.add(new Microwave("MW002", "Microwave", "1.700.000", "Samsung", "2 Tahun", "5",
                "900W", "13kg", "Hitam", "Home", "MW-S900", "25L", "845W"));
        daftarBarang.add(new Microwave("MW003", "Microwave", "1.600.000", "Panasonic", "1 Tahun", "8",
                "850W", "11kg", "Silver", "Portable", "NN-ST34", "22L", "710W"));
        daftarBarang.add(new Microwave("MW004", "Microwave", "1.800.000", "LG", "2 Tahun", "7",
                "950W", "14kg", "Putih", "Industrial", "MS2042DB", "23L", "900W"));
        daftarBarang.add(new Microwave("MW005", "Microwave", "1.400.000", "Toshiba", "1 Tahun", "12",
                "750W", "10kg", "Hitam", "Home", "ER-SGM23", "18L", "710W"));

        // loop menu
        while (true) {
            System.out.println("\nMenu Toko Elektronik");
            System.out.println("1. Tambah Barang");
            System.out.println("2. Tampilkan Semua Barang (Tabel)");
            System.out.println("3. Keluar");
            System.out.print("Pilih menu: ");
            String pilihan = sc.nextLine();

            if (pilihan.equals("1")) {
                // input data baru
                System.out.print("Kode    : "); String kode = sc.nextLine();

                // cek duplikat kode
                int index = cariKode(daftarBarang, kode);
                if (index != -1) {
                    System.out.println("⚠️ Barang dengan kode " + kode + " sudah ada, tidak boleh duplikat!");
                    continue; // balik ke menu
                }

                // lanjut input data lainnya
                System.out.print("Nama    : "); String nama = sc.nextLine();
                System.out.print("Harga   : "); String harga = sc.nextLine();
                System.out.print("Merk    : "); String merk = sc.nextLine();
                System.out.print("Garansi : "); String garansi = sc.nextLine();
                System.out.print("Stok    : "); String stok = sc.nextLine();
                System.out.print("Daya Listrik : "); String dayaListrik = sc.nextLine();
                System.out.print("Berat        : "); String berat = sc.nextLine();
                System.out.print("Warna        : "); String warna = sc.nextLine();
                System.out.print("Tipe         : "); String tipe = sc.nextLine();
                System.out.print("Model        : "); String model = sc.nextLine();
                System.out.print("Kapasitas    : "); String kapasitas = sc.nextLine();
                System.out.print("Daya Konsumsi: "); String dayaKonsumsi = sc.nextLine();

                // tambah ke daftar
                daftarBarang.add(new Microwave(kode, nama, harga, merk, garansi, stok,
                        dayaListrik, berat, warna, tipe, model, kapasitas, dayaKonsumsi));
                System.out.println("Barang berhasil ditambahkan.");

            } else if (pilihan.equals("2")) {
                // tampilkan tabel barang
                if (daftarBarang.isEmpty()) {
                    System.out.println("Belum ada data barang.");
                } else {
                    printTable(daftarBarang);
                }

            } else if (pilihan.equals("3")) {
                // keluar program
                System.out.println("Terima kasih!");
                break;

            } else {
                // kalau input menu salah
                System.out.println("Pilihan tidak valid.");
            }
        }

        sc.close();
    }
}
