#include <iostream>

using namespace std;

#define N 10

void caricaVet(int vet1[]);
void mostraVet(int vet1[], int vet2[]);
void invertiVet(int vet1[], int vet2[]);

int main(){
    int vet1[N];
    int vet2[N];
    int i, val;
    caricaVet(vet1);
    invertiVet(vet1, vet2);
    mostraVet(vet1,vet2);
}

void caricaVet(int vet1[]){
    int val;
    int i;
    for (i=0; i<N; i++){
        cout << "Inserire un valore: ";
        cin >> val;
        vet1[i]=val;
    }
}
