#include <iostream>
#include <time.h>

using namespace std;
void caricaVet(int npari[], int ndispari[]){
    int n, i, m;
    srand(time(NULL));
    for(m=0; m<30; m++){
        n=rand();
        if(n%2==0){
            for(i=m; i<30; i++)
                npari[i] = n;
        }
        else{
            for(i=m; i<30; i++)
            ndispari[i] = n;
        }
    }
}
void mostraVet(int vet[]){
    int i;
    for(i=0; i<30; i++){
        if(vet[i]%2==0){
            cout << "Il numero pari e': " << vet[i] << endl;
        }
        else
            cout << "Il numero dispari e': "<< vet[i] << endl;
    }
}

int main()
{
   int ndispari[30];
   int npari[30];
   int i;
   caricaVet(npari, ndispari);

   for(i=0; i<2; i++){
        if(i == 0){
            mostraVet(npari);
        }
        if(i == 1){
            mostraVet(ndispari);
        }
   }
}


