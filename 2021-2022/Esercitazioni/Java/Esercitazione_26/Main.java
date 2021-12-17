import javax.lang.model.util.ElementScanner6;

public class Main {
    public static void main(String[] args) {
        FileTesto f = new FileTesto("Parole.txt");
        Scanner num = new Scanner(System.in);
        String s;
        int n, i;

        do {
            System.out.println("1) Crea File\n2) Aggiungi Parola\n3) Conta Parole");
            System.out.println("4) Stampa File\n0) Esci\nInserisci Numero");
            i = num.nextInt();
            switch (i) {
                case 1:
                    System.out.println(f.Crea());
                    break;

                case 2:
                    System.out.println("Inserire parola ");
                    s = num.next();
                    if (f.aggiungi(s) == 1)
                        System.out.println("errore nell'inserimento");
                    break;
                case 3:
                    n = f.contaParole();
                    if (n != -1)
                        System.out.println("Nel file ci sono " + n + " parole");
                    else
                        System.out.println("Errore nella lettura del file");
                    break;
                case 4:
                    System.out.println(f.LeggiFile());
                    break;
            }

        } while (i != 0);
    }
}
