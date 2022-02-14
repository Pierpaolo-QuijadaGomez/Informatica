public class ListaOrd {
    private Atleta first;

    public ListaOrd() { //
        //
        first = new Atleta("", 1000);
        //
        first.setNext(new Atleta("", 0));
    }

    public void push(String nome, int punt) {
        Atleta p1, p2;
        // Nuovo elemento da inserire
        Atleta a = new Atleta(nome, punt);

        //
        p1 = first;
        for (p2 = first.getNext(); p2.getPunt() > punt; p2 = p2.getNext()) {
            p1 = p2; //
        }
        ;

        //
        p1.setNext(a); //
        a.setNext(p2); //
    }

    public String pop(String nome) {
        Atleta p1, p2; // Dichiaro due puntatori della classe Atleta
        String s;
        // Ricerca dell'atleta
        p1 = first;
        for (p2 = first.getNext(); (!(p2.getNome().equals(nome)))
                && (p2.getNext() != null); p2 = p2.getNext()) {
            p1 = p2;
        }
        //
        if (p2.getNome().equals(nome)) {
            p1.setNext(p2.getNext()); //
            s = "Eliminato l'atleta " + nome;
        } else
            s = "L'atleta " + nome + " non è presente in elenco";
        return s;
    }

    public String toString() {
        String s = "";
        Atleta p;

        p = first.getNext();
        if (p.getNext() == null)
            s = "Lista vuota\n";
        else {
            while (p.getNext() != null) {
                s = s + p.getNome() + "\t" + p.getPunt() + "\n";
                p = p.getNext();
            }
        }
        return s;
    }

}
