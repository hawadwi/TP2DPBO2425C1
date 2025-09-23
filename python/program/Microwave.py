from KitchenAppliances import KitchenAppliances

class Microwave(KitchenAppliances):
    def __init__(self, kode="", nama="", harga="", merk="", garansi="", stok="",
                 DayaListrik="", berat="", warna="", tipe="",
                 model="", kapasitas="", DayaKonsumsi=""):
        super().__init__(kode, nama, harga, merk, garansi, stok, DayaListrik, berat, warna, tipe)
        self._model = model
        self._kapasitas = kapasitas
        self._DayaKonsumsi = DayaKonsumsi

    def getModel(self) -> str:
        return self._model
    
    def setModel(self, model: str) -> None:
        self._model = str(model)

    def getKapasitas(self) -> str:
        return self._kapasitas
    
    def setKapasitas(self, kapasitas: str) -> None:
        self._kapasitas = str(kapasitas)

    def getDayaKonsumsi(self) -> str:
        return self._DayaKonsumsi
    
    def setDayaKonsumsi(self, DayaKonsumsi: str) -> None:
        self._DayaKonsumsi = str(DayaKonsumsi)

    def as_list(self):
        return [
            self.getKode(),
            self.getNama(),
            self.getHarga(),
            self.getMerk(),
            self.getGaransi(),
            self.getStok(),
            self.getDayaListrik(),
            self.getBerat(),
            self.getWarna(),
            self.getTipe(),
            self.getModel(),
            self.getKapasitas(),
            self.getDayaKonsumsi()
        ]

    
   