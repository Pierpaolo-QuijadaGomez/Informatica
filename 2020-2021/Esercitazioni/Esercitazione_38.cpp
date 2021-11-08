#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10

using namespace std;

int main()
{
    int i;
    int vet[N];
    srand(time(NULL));
    for (i=0; i<N; i++){
        vet[i] = 1 + rand() %100;
    }
    for(i=0; i<N; i++){
        cout << "Il valore della cella " << i << " e': " << vet[i] << endl;
    }
}


