#include <iostream>
#define SB 40
#define DB 75
#define TB 110
#define SA 50
#define DA 90
#define TA 140

using namespace std;

int main()
{
    int giorni;
    char periodo, camera;
    float prezzo_soggiorno;

    cout << "Buongiorno e benvenuto" << endl;
    cout << "Per quanti giorni vorrebbe soggiornare da noi: " << endl;
    cin >> giorni;
    cout << "A) Alta Stagione" << endl << "B) Bassa Stagione" << endl;
    cout << "In che stagione vorrebbe venire da noi: " << endl;
    fflush(stdin);
    periodo=getchar();
    cout << "S) Camera Singola" << endl << "D) Camera Doppia" << endl << "T) Camera Tripla" << endl;
    cout << "In che camera vorrebbe soggiornare" << endl;
    fflush(stdin);
    camera=getchar();

    if (periodo=='A'){
        switch (camera){
        case 'S':
            prezzo_soggiorno=SA;
            break;
        case 'D':
            prezzo_soggiorno=DA;
            break;
        case 'T':
            prezzo_soggiorno=TA;
            break;
        default:
            cout << "La camera non e' accettata" << endl;
        }
    }
    else {
        if (periodo=='B'){
                switch (camera){
            case 'S':
                prezzo_soggiorno=SB;
                break;
            case 'D':
                prezzo_soggiorno=DB;
                break;
            case 'T':
                prezzo_soggiorno=TB;
                break;
            default:
                cout << "La camera non e' accettata" << endl;
                }
        }
        else
            cout << "La stagione non e' accettata" << endl;

    }
    if (giorni >= 7)
        prezzo_soggiorno=giorni*prezzo_soggiorno*0.95;
    else
        prezzo_soggiorno=giorni*prezzo_soggiorno;
    cout << "L'importo finale vale " << prezzo_soggiorno << " euro " << "grazie per aver scelto il nostro servizio" << endl;
    system ("PAUSE");
    return 0;
}
