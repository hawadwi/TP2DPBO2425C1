from Barang import Barang

class KitchenAppliances(Barang):
    def __init__(self, kode="", nama="", harga="", merk="", garansi="", stok="",
                 DayaListrik="", Berat="", Warna="", Tipe=""):
        super().__init__(kode, nama, harga, merk, garansi, stok)
        self._DayaListrik = DayaListrik
        self._Berat = Berat
        self._Warna = Warna
        self._Tipe = Tipe

    def getDayaListrik(self) -> str:
        return self._DayaListrik
    
    def setDayaListrik(self, DayaListrik: str) -> None:
        self._DayaListrik = str(DayaListrik)

    def getBerat(self) -> str:
        return self._Berat
    
    def setBerat(self, Berat: str) -> None:
        self._Berat = str(Berat)

    def getWarna(self) -> str:
        return self._Warna
    
    def setWarna(self, Warna: str) -> None:
        self._Warna = str(Warna)

    def getTipe(self) -> str:
       return self._Tipe

    def setTipe(self, Tipe: str) -> None:
       self._Tipe = str(Tipe)

    