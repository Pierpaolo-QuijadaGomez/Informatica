#include <stdio.h>
#include <stdlib.h>
#define Pigreco 3.14

int main(){
    float raggio, circonferenza;
    printf("Inseire la misura del raggio: ");
    scanf("%f", &raggio);
    circonferenza = 2*Pigreco*raggio;
    printf("Circonferenza = %f\nRaggio = %f\n", circonferenza, raggio);
    system("PAUSE");
    return 0;
}
