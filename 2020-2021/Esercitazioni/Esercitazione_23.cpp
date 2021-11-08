#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

main()
{
    int tabellina, ind_pos;
    FILE*fi;
    int nmax;

    do{
    cout << "Fino a che numero vuoi stampare la tabellina?" << endl;
    cin >> nmax;
    }while(nmax < 1);
    fi = fopen("tabelline.txt", "w");
    if (fi == NULL)
            cout << "Impossibile aprire il file" << endl;
    fprintf(fi,"\n    ***Tavola pitagorica***     \n");
    for(tabellina=1; tabellina<=nmax; tabellina++){
        fprintf(fi, "\n");
        for(ind_pos=1; ind_pos<=10; ind_pos++){      //ciclo interno
            fprintf(fi, "\t%d",tabellina*ind_pos);
        }
    }
    fclose (fi);
    fi = fopen ("tabelline.txt", "a");
    fprintf(fi, "\n                                 ********************            \n");
    fclose (fi);
}