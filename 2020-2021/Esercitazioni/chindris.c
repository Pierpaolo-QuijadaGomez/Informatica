[07:10, 31/5/2021] Chindris: #include <iostream> 
#include <stdlib.h>

using namespace std ;


typedef struct
{
    char cod[10];
    char desc[30];
    float pre ; 
} PRODOTTI ;

int CaricaTab(PRODOTTI T[]) ; 

int main (int argc, char *argv[]) 
{
    PRODOTTI t[MACP];
    int n ;
    
    n = CaricaTab(t) ;
     
    if ( n!=1)
    {
    StampaTab(t,n) ; 
    }
    esle 
    {
        cout << "Errore nell'apertura del file"<< endl ; 
    }

    
            system("PAUSE") ; 
            return 0 ; 
}
int CaricaTab(PRODOOTTI T[])
{
    FILE * fi ;
    int i , n ; 
    
    fi = fopen("MAGAZZINO.txt" , "r" ) ; 
    if (fi == NULL )
    {
    n = 1 ;
    }
    else 
    {
    fscanf (fi, %d ; &n);
    
    for (i= 0 ; i < n ; i++ )
    {
    fscanf(fi, "%s % s %f", &t[i], desc , &t[i], pre);
    }
    fclose(fi);
    return n ;
    }
}