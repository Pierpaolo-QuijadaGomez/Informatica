#include <iostream>
#include <stdlib.h>

using namespace std;

int b, e;
int potenza();

int main(){
    cout << "Inseire il numero: " << endl;
    cin >> b;
    do{
        cout << "Inserire l'esponente maggiore di 0: " << endl;
        cin >> e;
    }while(e <= 0);
    potenza();
    cout << "Il risultato e': " << potenza();
}

int potenza(){
    int i, risultato;

    for (i = e; i > 0; i--){
        risultato = risultato + (b * i);
    }
    return risultato;
}
