#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int cont = 0;
    int gg_freddi = 0;
    int temp;
    int NG = 31;

    FILE*fi;
    fi = fopen ("Temp_Torino.txt", "r");
    if (fi != NULL){
            for (int i=0; i<NG; i++){
                fscanf(fi, "%d", &temp);
                cout << temp << endl;
                if (temp < 0){
                    gg_freddi++;
                }
                cont++;
            }
    }
    else{
        cout << "Errore nell'apertura del file" << endl;
    }
    fclose(fi);
    cout << "In tutto ci sono stati " << gg_freddi << " giorni freddi." << endl;
    system("PAUSE");
    return 0;
}
