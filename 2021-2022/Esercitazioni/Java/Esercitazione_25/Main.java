import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int scelta, cod, valutazione, pos;
        Vettore codice = new Vettore();
        Vettore voto = new Vettore();
        Scanner num = new Scanner(System.in);

        do {
            System.out.println("\n1. Inserimento\n2. Media Voti\n3. Studente Migliore\n4. Eliminazione\n5. Stampa");
            System.out.print("\nScelta: ");
            scelta = num.nextInt();

            switch (scelta) {
                case 1:
                    System.out.println("\nInserire codice dello studente e voto di informatica");
                    cod = num.nextInt();
                    valutazione = num.nextInt();
                    codice.Inserisci(cod);
                    voto.Inserisci(valutazione);
                    break;

                case 2:
                    System.out.println("\nMedia dei voti: " + voto.Media());
                    break;

                case 3:
                    pos = voto.maxPos();
                    System.out.println("\nStudente col voto più alto: "
                            + codice.toStringPos(pos) +
                            voto.toStringPos(pos));
                    break;

                case 4:
                    System.out.println("\nStudente da eliminare: ");
                    pos = num.nextInt();
                    if (codice.Elimina(pos) == -1)
                        System.out.println("\nPosizione " + pos + " non valida");
                    else
                        voto.Elimina(pos);
                    break;

                case 5:
                    System.out.println("\nElenco Studenti");
                    System.out.println("Codice     " + codice.toString());
                    System.out.println("Voto     " + voto.toString());
                    break;
            }
        } while (scelta != 0);
    }
}
