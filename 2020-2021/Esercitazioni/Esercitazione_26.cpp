#include <string.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int eta;
    int nf = 0;
    int sf = 0;
    int nm = 0;
    int sm = 0;
    double mm;
    double mf;
    char sesso[8];

    FILE*fi;
    fi = fopen("eta.txt", "r");
    while(!feof(fi)){
        fscanf(fi, "%s%d",&sesso,&eta);
        if (strcmp(sesso, "Maschio")==0){
            nm++;
            sm = sm + eta;
        }
        else{
            nf++;
            sf = sf + eta;
        }
    }
    fclose(fi);
    mf = (double) sf/nf;
    mm = (double) sm/nm;
    cout << "L'eta media femminile equivale a : " << mf << endl;
    cout << "L'eta media maschile equiavle a : " << mm << endl;
    system("PAUSE");
    return 0;
}
