public class Atleta {
    private String nome;
    private int punt;
    private Atleta next; // dichiaro i tre attributi della classe Atleta

    public Atleta(String nome, int punt) {
        this.nome = nome;
        this.punt = punt;
        next = null; // inizializzo il puntatore next al vaore null
    }

    public String getNome() {
        return nome;
    }

    public int getPunt() {
        return punt;
    }

    public Atleta getNext() {
        return next;
    }

    public void setNext(Atleta p) {
        next = p;
    }
}
