#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    float num1;
    float num2;
    float num3;
    char choice;
    float Nmin;
    float Nmedio;
    float Nmax;


    printf ("Inserire il primo numero\n");
    scanf ("%f", &num1);
    printf ("Inserie il seconod numero\n");
    scanf ("%f", &num2);
    printf ("Inserire il terzo numero\n");
    scanf ("%f", &num3);

    printf("Ordine: \n");
    printf("A) Crescente\n");
    printf("B) Decrescente\n");
    printf("In che ordine vuoi i numeri\n");
    fflush(stdin);
    choice = getchar();

    if (num1>num2&&num2>num3){
        Nmax = num1;
        Nmedio = num2;
        Nmin = num3;
    }
    else{
        if (num1<num2&&num2<num3){
            Nmax = num3;
            Nmedio = num2;
            Nmin = num1;
        }
        else{
            if (num2>num3){
                Nmax = num2;
                if (num3>num1){
                    Nmedio = num3;
                    Nmin = num1;
                }
                else{
                    Nmedio = num1;
                    Nmin = num3;
                }
            }
            else{
                if (num1>num3){
                        Nmax = num1;
                        Nmedio = num3;
                        Nmin = num2;
                }
                else{
                        Nmax = num3;
                        Nmedio = num1;
                        Nmin = num2;
                    }
                }
            }
        }

     if (choice = 'A')
        printf("I numeri sono %f, %f, %f\n", Nmin,Nmedio,Nmax);
     else
        printf("I numeri sono %f, %f, %f\n", Nmax,Nmedio,Nmin);

    system ("PAUSE");
    return 0;
}
