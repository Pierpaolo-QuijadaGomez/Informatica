#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
#define N 100

void casualiVet(int vet[]);
int esaminaVet(int vet[], int vet2[]);
void mostraVet(int vet2[], int flag);

int main()
{
    int vet[N];
    int vet2[N];
    casualiVet(vet);
    int flag=esaminaVet(vet, vet2);
    mostraVet(vet2, flag);
}

int esaminaVet(int vet[], int vet2[]){
    int flag = 0, i;
    for(i=0; i<100; i++){
        if (vet[i]%5==0 | vet[i]%6==0){
            vet2[flag] = vet[i];
            flag++;
        }
    }
    cout << "Le occorenze sono: " << flag << endl;
    return flag-1;
}

void casualiVet(int vet[]){
    int n, i;
    srand(time(NULL));
    for (i=0; i < N; i++){
        n = 1+rand()%500;
        vet[i] = n;
    }
}

void mostraVet(int vet2[], int flag){
    int i;
    for(i=0; i<=flag; i++)
        cout << "Uno dei multipli e': " << vet2[i] << endl;
}



