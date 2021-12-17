import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int canale = 1;
        int volume = 30;
        boolean stato = false;
        int scelta;
        Scanner input = new Scanner(System.in);
        Televisore televisore = new Televisore();
        do {
            televisore.getStato();
            do {
                System.out.println("\nComandi Telecomando");
                System.out.println("1) Scelta del canale");
                System.out.println("2) Canale +");
                System.out.println("3) Canale -");
                System.out.println("4) Volume +");
                System.out.println("5) Volume -");
                System.out.println("6) MI SENTO FORTUNATO!");
                System.out.println("7) ON/OFF");
                System.out.print("Scelta: ");
                scelta = input.nextInt();
                if (stato == false && scelta != 7) {
                    System.out.println("La TV è spenta");
                    scelta = -1;
                }
            } while (scelta < 1 || scelta > 7);

            switch (scelta) {
                case 1:
                    do {
                        System.out.print("\nCanale: ");
                        canale = input.nextInt();
                    } while (canale < 1 || canale > 100);
                    televisore.setCanale(canale);
                    break;

                case 2:
                    televisore.incrementoCanale();
                    break;

                case 3:
                    televisore.decrementoCanale();
                    break;

                case 4:
                    televisore.incrementoVolume();
                    break;

                case 5:
                    televisore.decrementoVolume();
                    break;

                case 6:
                    televisore.canaleRandom();
                    break;

                case 7:
                    stato = !stato;
                    televisore.setStato(stato);
                    break;

                default:
                    System.out.println("Errore");
                    break;
            }
        } while (true);
    }
}
