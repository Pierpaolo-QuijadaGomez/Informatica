package Esercitazione_15;   

public class Esegui_Quadrato {

    public static void main(String[] args) {
        Quadrato quad = new Quadrato();

        quad.lato=12;

        System.out.println("Area = " + quad.area());
        System.out.println("Perimetro = " + quad.perimetro());
    }
    
}
