#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main(){
   int contatore, i, num;
   int var = 0;
   do{
       contatore = 0;
       do{
           cout << "Benvenuto, inserisci un numero intero positivo: ";
           cin >> num;
       } while (num<0);
       for(i=1; i<=num/2; i++){
           if(num%i == 0){
               contatore = contatore + i;
               cout << i << endl;
           }
       }
       if(num-contatore == 0){
           cout << "Il numero inserito e' perfetto" << endl;
           var++;
       }
       else
           cout << "Il numero inserito non è perfetto" << endl;
   } while (var != 3);
}





