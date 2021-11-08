#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int num_Lati;
  float misura_lati, P=0, A=0;

    printf("\nInserire il numero di lati: ");
    scanf("%d", &num_Lati);

    printf("\nInserire la misura del lato: ");
    scanf("%f", &misura_lati);

  switch(num_Lati){
      case 3:
           printf ("\nE' un triangolo");
           P = misura_lati *3;
           A=misura_lati*misura_lati*sqrt(3)/4;
           break;
      case 4:
           printf ("\nE' un quadrato");
           P = misura_lati *4;
           A=misura_lati*misura_lati;
           break;
       case 5:
           printf ("\ninserisco il nome pentagono");
           P = misura_lati *5;
           A=P*misura_lati*0.688/2;
           break;
       case 6:
           printf ("\ninserisco il nome esagono");
           P = misura_lati *6;
           A=misura_lati*misura_lati*2.598;
           break;
       default:
           printf ("\nNon e' una figura a me nota...\n\n");
           break;
        }

    if (num_Lati>2 && num_Lati<7){
        printf ("\n\nIl perimetro vale %f", P);
        printf ("\nL'area vale: %f\n", A);
    }

    system("PAUSE");
    return 0;

}