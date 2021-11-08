#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int numero_intero;
    char carattere;
    float M_Pi;

    cout << "      ***Formattazione dell'I/O***" << endl << endl;
    cout << "      Inserire un numero intero : " ;
    cin >> numero_intero;
    cout << "      Il nummero inserito e' " << numero_intero << "." << " Mi sembra un bel numero!" << endl;
    cout << endl << endl;
    cout.precision (3);
    cout << "      Il valore di Pigreco e' " << M_PI << " mi piace di piu'!" << endl;
    cout << endl << endl;
    cout << "      Inserire un carattere : " ;
    fflush(stdin);
    carattere = getchar();
    cout << endl;
    cout << "      Il carattere inserito e' " << carattere << "." << " Potevi scegliere di meglio... ;-)" << endl;
    return 0;
}