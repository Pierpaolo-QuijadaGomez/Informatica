#include <iostream>

using namespace std;
int num_da_indovinare, numero_Tentativi;
int inserisciNumero();
int indovinaNumero(int num_inserito);
int nmax = 100;
int nmin = 0;

int main()
{
    int max_Tentativi, risultato, num_inserito;

    do{
        cout << "Digitare il numero da indovinare(tra 0 e 100): " << endl;
        cin >> num_da_indovinare;
    } while(num_da_indovinare < 0 || num_da_indovinare > 100);
    system("CLS");
    do{
        cout << "Quanti tenativi: " << endl;
        cin >> max_Tentativi;
    } while (max_Tentativi <= 0);
    system("CLS");
    do{
        num_inserito = inserisciNumero();
        risultato = indovinaNumero(num_inserito);
    } while(num_inserito != num_da_indovinare && numero_Tentativi < max_Tentativi);
    if (risultato == 1)
        cout << endl << "Congratulazioni, hai vinto!!!" << endl;
    else
        cout << endl << "Sfortunatamente hai perso" << endl;
}
int inserisciNumero(){
    int num_inserito;
    do{
        cout << "Inserire un numero(tra " << nmin << " e " << nmax << ") :"<< endl;
        cin >> num_inserito;
    } while (num_inserito < nmin || num_inserito > nmax);
    return num_inserito;
}
int indovinaNumero(int num_inserito){
    if (num_inserito == num_da_indovinare)
        return 1;
    else{
        if (num_inserito > num_da_indovinare){
            cout << "Troppo grande" << endl << endl;
            nmax = num_inserito -1;
            numero_Tentativi++;
        }
        else{
            cout << "Troppo piccolo" << endl << endl;
            nmin = num_inserito + 1;
            numero_Tentativi++;
        }
        return 0;
    }
}
