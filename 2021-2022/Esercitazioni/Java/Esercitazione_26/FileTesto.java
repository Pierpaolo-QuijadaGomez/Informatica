public class FileTesto {
    String nomeFile;

    // mtodo costruttore
    public FileTesto(String nome) {
        nomeFile = nome;
    }

    // creo gli oggetti per la lettura e scritture del file
    public String Crea() {
        try {
            FileWriter out = new FileWriter(nomeFile);
            PrintWriter wri = new PrintWriter(out);
            out.close();
            return "File creato correttemente";
        } catch (Exception e) {
            return ("Error: " + e);
        }
    }

    // carico la parola data al metodo come parametro
    public int aggiungi(String parola) {
        try {
            FileWriter out = new FileWriter(nomeFile, true);
            PrintWriter wri = new PrintWriter(out);
            wri.println(parola);
            out.close();
            return 0;
        } catch (Exception e) {
            return 1;
        }
    }

    // apro il file e conto le parole per poi chiuderlo e restituire un numero
    // intero
    public int contaParole() {
        String parola;
        int n = 0;
        try {
            FileReader in = new FileReader(nomeFile);
            BufferedReader buin = new BufferedReader(in);
            parola = buin.readLine();
            while (parola != null) {
                str = str + "\n" + parola;
                parola = buin.readLine();
            }
            in.close();
            return str;
        } catch (Exception e) {
            return -1;
        }
    }

    // apro il file e copio il suo contenuto per poi restituirlo al main
    public String leggiFile() {
        String str = "";
        String parola = "";

        try {
            FileReader in = new FileReader(nomeFile);
            BufferedReader buin = new BufferedReader(in);
            parola = buin.readLine();
            while (parola != null) {
                str = str + "\n" + parola;
                parola = buin.readLine();
            }
            in.close();
            return str;
        } catch (Exception e) {
            return "Errore: " + e;
        }
    }

}
