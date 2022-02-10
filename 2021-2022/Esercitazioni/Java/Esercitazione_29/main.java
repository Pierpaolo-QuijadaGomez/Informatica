import java.util.Scanner;
import java.util.GregorianCalendar;

public class main {
    public static void main(String[] args) {
        GregorianCalendar data = new GregorianCalendar();
        Scanner input = new Scanner(System.in);
        String barcode, descrizione;
        float prezzo;
        char scelta;

        System.out.println("1)Aggiungo un prodotto\n2)Applica sconto\n3)Visualizza i prodotti");
        switch (scelta) {
            case 1:
                System.out.print("Codice a barre: ");
                barcode = num.nextString();
                System.out.print("\nDescrizione del prodotto: ");
                descrizione = num.nextString();
                System.out.print("\nPrezzo: ");
                prezzo = num.nextFloat();
                break;

            case 2:
                System.out.print("Prodotto: ");
        }

    }
}
