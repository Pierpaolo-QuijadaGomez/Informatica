public class Prodotti {
    private String descrizione;
    private String barcode;
    private float prezzo;

    public Prodotti(String barcode, float prezzo, String descrizione) {
        this.barcode = barcode;
        this.prezzo = prezzo;
        this.descrizione = descrizione;
    }

    public String getBarcode() {
        return barcode;
    }

    public String getDescrizione() {
        return descrizione;
    }

    public float getPrezzo() {
        return prezzo;
    }

    public setBarcode(String barcode) {
        this.barcode = barcode;
    }

    public setDescrizione(String descrizione) {
        this.descrizione = descrizione;
    }

    public setPrezzo(float prezzo) {
        this.prezzo = prezzo;
    }

}
