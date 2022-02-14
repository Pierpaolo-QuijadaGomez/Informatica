import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int scelta;
        String nome;
        int punt;

        Scanner tastiera = new Scanner(System.in);
        ListaOrd p = new ListaOrd();

        do {
            System.out.println(" 1. inserisci atleta\n 2. estrai atleta");
            System.out.println(" 3. stampa lista atleti\n 0. esci\n Scelta: ");
            scelta = tastiera.nextInt();

            switch (scelta) {
                case 1:
                    System.out.println("Inserisci nome atleta: ");
                    nome = tastiera.next();
                    System.out.println("Inserisci punti atleta: ");
                    punt = tastiera.nextInt();
                    p.push(nome, punt); //
                    break;
                case 2:
                    System.out.println("Inserisci nome dell'atleta da eliminare: ");
                    nome = tastiera.next();
                    System.out.println(p.pop(nome)); //
                    break;
                case 3:
                    System.out.println(p.toString());
                    break;
            }
        } while (scelta != 0);
    }
}
