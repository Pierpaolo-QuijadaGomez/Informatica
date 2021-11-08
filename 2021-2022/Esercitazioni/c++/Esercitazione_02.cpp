#include <stdio.h>
#include <iostream>
 
using namespace std;
 
float addizione(double num1, double num2);
float sottrazione(double num1, double num2);
float divisione(double num1, double num2);
float moltiplicazione(double num1, double num2);
 
int main(){
    char car;
    double num1, num2;
    double risultato;
    cout << "Benvenuto nella Pier-calcolatrice" << endl;
    do{ 
        cout << "\n1) Addizione\n2) Sottrazione\n3) Moltiplicazione\n4) Divisione\n0) Esci" << endl;
        do{
            cout << "Cosa vuoi fare: ";
            cin >> car;
        } while(car != '1' && car != '2' && car != '3' && car != '4' && car != '0');
        if(car == '0')
            return 0;
        cout << "Inserire il primo numero" << endl;
        cin >> num1;
        cout << "Inserire il secondo numero" << endl;
        cin >> num2;
        switch(car) {
            case '1':
                risultato = addizione(num1, num2);
            break;
 
            case '2':
                risultato = sottrazione(num1, num2);
            break;
 
            case '3':
                risultato = moltiplicazione(num1, num2);
            break;
 
            case '4':
                risultato = divisione(num1, num2);
            break;
            default:
                cout << "Errore" << endl;
            break;
        }    
        cout << "Il risultato e': " << risultato << endl;
    } while(true);
}
 
float addizione(double num1, double num2){
    return num1 + num2;   
}

 
float sottrazione(double num1, double num2){
    return num1 - num2;   
}
 
float moltiplicazione(double num1, double num2){
    return num1 * num2;  
}
 
float divisione(double num1, double num2){
    if(num2 == 0){
        cout << "Errore" << endl;
        return 0;
    }
    return num1 / num2;  
}
 
 

