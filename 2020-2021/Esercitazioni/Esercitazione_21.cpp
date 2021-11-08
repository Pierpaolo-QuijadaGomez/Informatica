#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

main()
{
    int tabellina, ind_pos, num, nmax;

    do{
    cout << "Fino a che numero vuoi stampare la tabellina" << endl;
    cin >> nmax;
    } while(nmax<0 && nmax>20);

    for(tabellina=1; tabellina<=nmax; tabellina++){   //ciclo esterno
        cout<<endl;
        for(ind_pos=1; ind_pos<=10; ind_pos++){      //ciclo interno
            cout << setw(4) << right << tabellina*ind_pos;         //stampa valore
        }
    }
    cout << endl;
}

