#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, num3, Nmax, Nmedio, Nmin;
    char choice;

    printf("Inserire il primo numero: ");
    scanf("%f", &num1);
    printf("\nInserire il secondo numero: ");
    scanf("%f", &num2);
    printf("\nInserire il terzo numero: ");
    scanf("%f", &num3);
    printf("\nA) Crescente\nB) Decrescente\n");
    printf("In quale ordine: ");
    fflush(stdin);
    scanf("%c", &choice);
    choice=getchar();
    if(num1 > num3){
        if(num1 > num2){
            if (num2 > num3){
                Nmax = num1;
                Nmedio = num2;
                Nmin = num3;          
            }
        }
        else{
            Nmax = num2;
            Nmedio = num1;
            Nmin = num3;
        }
    }
    if(num3 > num1){
        if(num3 > num2){
            if(num2 > num1){
                Nmax = num3;
                Nmedio = num2;
                Nmin = num1;
            }
        }
        else{
            Nmax = num2;
            Nmedio = num3;
            Nmin = num1;
        }
    }
    if(num3 > num2){
        if(num3 > num1){
            if(num1 > num2){
                Nmax = num3;
                Nmedio = num1;
                Nmin = num2;
            }
        }
        else{
            Nmax = num1;
            Nmedio = num3;
            Nmin = num2;
        }
    }
    if (choice =='A'){
            printf("I numeri sono: %f, %f, %f\n", Nmin, Nmedio, Nmax);
    }
    if (choice == 'B'){
            printf("I numeri sono: %f, %f, %f\n", Nmax, Nmedio, Nmin);
    }

    system("PAUSE");
    return 0;
}
