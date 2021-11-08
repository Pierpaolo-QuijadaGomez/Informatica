#include <iostream>
using namespace std;
int main()
{
    int num_pos = 0;
    int num_nullo = 0;
    int num_neg = 0;
    int num_pari = 0;
    int num_dispari = 0;
    int num_crescente = 1;
    int num_decrescente = 1;
    int cont;
    int num1;
    int num2;


    cout << "Quanti numeri hai intenzione di inserire?" << endl;
    cin >> cont;
    while (cont>0){
        cout << "Inserisci un numero" << endl;
        cin >> num1;
        if (num1 > num2){
            num_crescente = num_crescente;
            num_decrescente = 0;
        }
        if (num1 == num2){
            num_crescente = 0;
            num_decrescente = 0;
        }
        if (num1 < num2){
            num_crescente = 0;
            num_decrescente = num_decrescente;
        }
        if (num1 > 0) num_pos++;
        if (num1 == 0) num_nullo++;
        if (num1 < 0) num_neg++;
        if (num1%2 == 0) num_pari++;
        else num_dispari++;
        num2=num1;
        cont--;
    }
    cout << "In tutto ci sono " << num_pos << " numeri positivi" << endl;
    cout << "In tutto ci sono " << num_nullo << " numeri nulli" << endl;
    cout << "In tutto ci sono " << num_neg << " numeri negativi" << endl;
    cout << "In tutto ci sono " << num_pari << " numeri pari" << endl;
    cout << "In tutto ci sono " << num_dispari << " numeri dispari" << endl;
    if (num_crescente == 1) cout << "La stringa e' in ordine crescente" << endl;
    if (num_crescente == 0 && num_decrescente == 0 || num_crescente == 1 && num_decrescente == 1) cout << "La stringa non e' ne' in ordine crescente ne' in ordine decrescente" << endl;
    if (num_decrescente == 1) cout << "La stringa e' in ordine decrescente" << endl;

    system("PAUSE");
    return 0;

}
