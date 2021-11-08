#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Num1, Num2, SommaNum, SottrazioneNum, ProdottoNum, DivisioneNum;
    char Carattere;

    printf("Inserire il primo numero: ");
    scanf("%f", &Num1);
    printf("\nInserire il secondo numero: ");
    scanf("%f", &Num2);
    printf("\nA) Addizione\nB) Sottrazione\nC) Prodotto\nD) Divisione\n");
    printf("\nChe operazione vuoi fare: ");
    fflush(stdin);
    scanf("%c", &Carattere);
    if(Carattere =='A'){
            SommaNum=Num1+Num2;
            printf("Somma= %f\n", SommaNum);
    }
    if(Carattere =='B'){
            SottrazioneNum=Num1-Num2;
            printf("Sottrazione= %f\n", SottrazioneNum);
    }
    if(Carattere =='C'){
            ProdottoNum=Num1*Num2;
            printf("Prodotto= %f\n", ProdottoNum);
    }
    if(Carattere =='D'){
            DivisioneNum=Num1/Num2;
            printf("Quoziente= %f\n", DivisioneNum);
    }
    system("PAUSE");
    return 0;
}
