#include <stdio.h>
#include <stdlib.h>

int main()
{

    float Num1;
    float Num2;
    float SommaNum;
    float ValMedio;


    printf("Inserire il primo numero\n");
    scanf("%f", &Num1);
    printf("Inserire il secondo numero\n");
    scanf("%f", &Num2);

    if (Num1!=Num2){
        SommaNum=Num1+Num2;
        ValMedio=SommaNum/2;
        printf("Valore Medio= %f\n", ValMedio);
    }
    else
        printf("La prossima volta non mi disturbare...!\n");

    system("PAUSE");
    return 0;
}


