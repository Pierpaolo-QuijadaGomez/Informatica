<<<<<<< HEAD
package Esercitazione_19;

import java.util.Scanner;

public class Main {
    float imp;
    int scelta;
    Scanner num = new Scanner(System.in);
    String nome, numeroconto;

    System.out.println("Inserisci il nome ");nome=num.next();System.out.println("Inserisci il numero conto ");numeroconto=num.next();
    ContoCorrente conto = new ContoCorrente(nome, numeroconto);

    do
    {
        System.out.println(" 1) Prelievo\n 2) Versamento\n 3) Stampa\n 0) Esci\nFai una scelta");
        scelta = num.next();
        switch (scelta) {
        case 1:
            System.out.println("Inserisci importo da prelevare ");
            imp = num.nextFloat();
            if (conto.prelievo(imp) != 0)
                System.out.println("Saldo inferiore alla cifra richiesta\nSaldo = " + conto.getSaldo());
            break;
        case 2:
            System.out.println("Inserisci importo da versare");
            imp = num.nextFloat();
            conto.versamento(imp);
            break;
        case 3:
            System.out.println(conto);
            break;
        }
    }while(scelta!=0);
}
=======
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        float imp;
        int scelta;
        Scanner num = new Scanner(System.in);
        String nome, numeroconto;

        System.out.println("Inserisci il nome");
        nome = num.next();
        System.out.println("Inserisci il numero conto");
        numeroconto = num.next();
        ContoCorrente conto = new ContoCorrente(nome, numeroconto);

        do{
            System.out.println(" 1) Prelievo\n 2) Versamento\n 3) Stampa\n 0) Esci\nFai una scelta");
            scelta = num.nextInt();
            switch(scelta){
                case 1:
                    System.out.println("Inserisci l'importo da prelevare");
                    imp = num.nextFloat();
                    if(conto.prelievo(imp)!=0)
                        System.out.println("Saldo inferiore alla cifrfa richiesta\nSaldo = " + conto.getSaldo());
                break;

                case 2:
                    System.out.println("Inserisci l'importo da versare");
                    imp = num.nextFloat();
                    conto.versamento(imp);
                break;

                case 3:
                    System.out.println(conto);
                break;
            }
        } while(scelta!=0);

    }
}
>>>>>>> da0ff700e47e99e612da3c2620739866723d8584
