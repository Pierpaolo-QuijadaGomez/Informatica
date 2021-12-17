public class FileTesto {
    String nomeFile;

    public FileTesto(String nome) {
        nomeFile = nome;
    }

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
