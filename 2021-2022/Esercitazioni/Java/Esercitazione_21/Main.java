import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int lancio1, lancio2, numeroFacce;
        Pedina pedina = new Pedina();
        Scanner input = new Scanner(System.in);
        System.out.println("Regolamento: Vince il primo che arriva a 100");
        do {
            System.out.println("Inserire il numero di facce del dado");
            numeroFacce = input.nextInt();
        } while (numeroFacce < 4 || numeroFacce > 20);

        Dado dado = new Dado(numeroFacce);
        do {
            System.out.println("\nInizio turno");
            lancio1 = dado.lancia();
            lancio2 = dado.lancia();
            pedina.avanza(lancio1, lancio2);
            System.out.println("Posizione pedina 1 = " + pedina.getPosizione1());
            System.out.println("Posizione pedina 2 = " + pedina.getPosizione2());
            System.out.println("Fine Turno\n");
        } while (pedina.getPosizione1() < 100 || pedina.getPosizione2() < 100);
        System.out.println("La gara e' finita!!!");

        if (pedina.getPosizione1() > pedina.getPosizione2()) {
            System.out.println("Il vincitore e' la pedina 1");
        } else {
            System.out.println("Il vincitore e' la pedina 2");
        }

    }
}
