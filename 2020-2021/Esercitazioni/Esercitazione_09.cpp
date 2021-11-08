#include <iostream>

using namespace std;

int main()
{
    char cond_utente;
    float sconto, importo, cos_biglietto;

    cout << "Inserire il costo del biglietto: " << endl;
    cin >> cos_biglietto;
    cout << "Che condizione ha: " << endl;
    cout << "P) pensionato" << endl;
    cout << "D) disoccupato" << endl;
    cout << "S) studente" << endl;
    cout << "N) nessuna"  << endl;
    cin >> cond_utente;

    switch (cond_utente){
    case 'P':
        sconto=10*cos_biglietto/100;
        importo=cos_biglietto-sconto;
        break;
    case 'S':
        sconto=15*cos_biglietto/100;
        importo=cos_biglietto-sconto;
        break;
    case 'D':
        sconto=25*cos_biglietto/100;
        importo=cos_biglietto-sconto;
        break;
    case 'N':
        importo=cos_biglietto;
        break;
    default:
        importo=0;
        cout << "La condizione non e' accettata" << endl;
        break;
    }
    cout << "L'importo vale " << importo << endl;

    system("PAUSE");
    return 0;
}


