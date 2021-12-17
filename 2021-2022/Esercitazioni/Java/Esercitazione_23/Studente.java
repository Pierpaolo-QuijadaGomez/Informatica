public class Studente {
    private String nome, cognome;
    private int assenze;
    private double voto_informatica;
    private double voto_inglese;
    private double voto_matematica;
    private double voto_italiano;
    private double voto_fisica;
 
    public Studente(String nome, String cognome, int assenze) {
        this.nome = nome;
        this.cognome = cognome;
        this.assenze = assenze;
    }
 
    public void setInformatica(double voto) {
        voto_informatica = voto;
    }
 
    public void setInglese(double voto) {
        voto_inglese = voto;
    }
 
    public void setMatematica(double voto) {
        voto_matematica = voto;
    }
 
    public void setFisica(double voto) {
        voto_fisica = voto;
    }
 
    public void setItaliano(double voto) {
        voto_italiano = voto;
    }
 
    public double getInformatica() {
        return voto_informatica;
    }
 
    public double getInglese() {
        return voto_inglese;
    }
 
    public double getFisica() {
        return voto_fisica;
    }
 
    public double getMatematica() {
        return voto_matematica;
    }
 
    public double getItaliano() {
        return voto_italiano;
    }
 
}
