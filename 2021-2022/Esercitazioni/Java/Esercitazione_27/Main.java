import java.util.Scanner;
import java.io.FileReader;
import java.io.FileWriter;

public class Main {
    public static void main(String[] args) {
        Scanner num = new Scanner(System.in);
        int scelta;
        String nomeFile, parola;
        System.out.println("Nome del File: ");
        nomeFile = num.next();
        FileTesto f = new FileTesto("Costituzione_italiana.txt");
        do {
            do {
                System.out.println(
                        "1) Cerca una parola\n2) Numero di occorenze di un carattere\n3) Occorrenze di tutti i caratteri dell' alfabeto\n0) Esci");
                System.out.println("Scelta: ");
                scelta = num.nextInt();
            } while (scelta < 0 || scelta > 3);
            switch (scelta) {
                case 1:
                    System.out.println("Parola da cercare: ");
                    parola = num.next();
                    System.out.println(f.cercaParola(parola));
                    break;
                case 2:


            }
        } while (1 != 0);
    }
}