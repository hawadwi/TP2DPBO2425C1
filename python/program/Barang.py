#kelas induk

class Barang:
     
    def __init__(self, kode: str, nama: str, harga: str, merk: str, garansi: str, stok: str):
        self._kode = str(kode)
        self.nama = str(nama)
        self.harga = str(harga)
        self.merk = str(merk)
        self._garansi = str(garansi)
        self._stok = str(stok)

    def getKode(self) -> str:
        return self._kode
    
    def setKode(self, kode: str) -> None:
        self._kode = str(kode)

    def getNama(self) -> str:
        return self.nama
    
    def setNama(self, nama: str) -> None:
        self.nama = str(nama)

    def getHarga(self) -> int:
        return self.harga
    
    def setHarga(self, harga: str) -> None:
        self.harga = str(harga)

    def getStok(self) -> str:
       return self._stok

    def setStok(self, stok: str) -> None:
       self._stok = str(stok)

    def getMerk(self) -> str:
       return self.merk

    def setMerk(self, merk: str) -> None:
       self.merk = str(merk)

    def getGaransi(self) -> str:
       return self._garansi

    def setGaransi(self, garansi: str) -> None:
       self._garansi = str(garansi)

