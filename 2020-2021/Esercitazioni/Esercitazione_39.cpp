#include <iostream>
#define N 10

using namespace std;
void caricaVet(int vet[]);
void mostraVet(int vet[]);

int main()
{
    int vet[N];
    caricaVet(vet);
    mostraVet(vet);


}
void caricaVet(int vet[]){
    int i;
    for(i =0; i<N; i++){
        cout << "Inserire il valore della cella " << i << " : ";
        cin >> vet[i];
    }
}
void mostraVet(int vet[]){
    int i;
    for(i=0; i<N; i++){
        cout << "il valore della cella " << i << " e': " << vet[i] << endl;
    }
}

 
