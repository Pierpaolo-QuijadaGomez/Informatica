#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main(){
    int tot, num;
    FILE *file1;
    file1 = fopen("numeri2.txt","w");
    tot=0;
    if( file1 == NULL )
    {
        printf("Errore nell'apertura del file\n");
    }
    else{
        while(!feof(file1)){
            fscanf(file1, "%d", &num);
            cout << "numero: " << num << endl;
            tot=tot+num;
        }
    }
    fclose(file1);

    cout << "La somma vale " << tot << endl;
}
