#include <iostream>
#include <stdlib.h>

using namespace std;
float esamina_numeri(float &massimo,float &minore);
int main()
{
    float massimo, minore;
    if (esamina_numeri(massimo, minore)==0){
        cout << "Nessun valore inserito" << endl;
    }
    else{
        cout << "Il numero minore vale: " << minore << endl;
        cout << "Il numero massimo vale: " << massimo << endl;
    }
}
float esamina_numeri(float &massimo,float &minore){
    float num;
    cout << "Inserire un numero: " << endl;
    cin >> num;
    if(num != 0){
        massimo = num;
        minore = num;
        do{
            if(massimo < num)
                massimo = num;
            if(minore > num)
                minore = num;
            cout << "Inserire un numero: " << endl;
            cin >> num;
        } while(num != 0);
        return 1;
    }
    else
        return 0;
}
