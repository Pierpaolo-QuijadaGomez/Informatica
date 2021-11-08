#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    float num_casuale;
    float somma = 0;
    srand(time(NULL));
    do{
    num_casuale = 2 + rand() %11;
    cout << num_casuale << endl;
    somma = num_casuale + somma;
    }while(somma <= 100);
    system("PAUSE");
    return 0;
    }
// Per generare un numero casuale intero compreso in un intervallo a e b:
// numero_casuale = a+ rand()%(b-a +1);