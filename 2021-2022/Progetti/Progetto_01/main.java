import java.util.Scanner;

public class main {
    public static void main(String[] args) {

        Scanner num = new Scanner(System.in);
        int scelta;
        do {
            System.out.println("1) Aggiunta di motoveicolo venduto\n2) Aggiunta di motoveicolo in vendita");
            System.out.println("3) Rimozione di motoveicolo venduto\n4) Rimozione di motoveicolo in vendita");
            System.out.println(
                    "5) Visualizzare tutti i motoveicoli venduti\n6) Visualizzare tutti i motoveicoli in vedita");
            System.out.print("Scelta: ");
            scelta = num.nextInt();
        } while (scelta != 1 && scelta != 2 && scelta != 3 && scelta != 4 && scelta != 5 && scelta != 6);

    }

}