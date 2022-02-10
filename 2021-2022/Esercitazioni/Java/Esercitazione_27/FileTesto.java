public class FileTesto {
    private String nomeFile;

    public FileTesto(String nome) {
        nomeFile = nome;
    }

    public int cercaParola(String parola) {
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

}
