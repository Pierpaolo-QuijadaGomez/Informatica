import java.util.Scanner;
 
class calcoloRettangolo{
    public static void main(String[] args){
        int lato1, lato2;
        Scanner input = new Scanner(System.in);
 
        System.out.print("Lato 1: ");
        lato1 = input.nextInt();
 
        System.out.print("Lato 2: ");
        lato2 = input.nextInt();
 
        System.out.println("Area: " + (lato1*lato2));
        System.out.println("Perimetro: " + (lato1+lato2+lato1+lato2));
    }
}
