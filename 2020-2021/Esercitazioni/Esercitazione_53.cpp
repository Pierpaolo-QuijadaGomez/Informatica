#include <iostream>

using namespace std;

int fatt(int n, int x);

int main(){
    int n, ris, x;
    do{
      cout << "\nInserisci il valore dell'esponente: ";
      cin >> n;
    } while (n<0);
    cout << "\nInserici il valore della base: ";
    cin >> x;
    if(n==0 && x==0)
      cout << "Il risultato e' indeterminato" << endl;
    else{


    ris = fatt(n, x);
    cout << "\nIl risultato vale: " << ris << endl;
    }
    return 0;
    
}

int fatt(int n, int x) {

    if(n==0) return 1;
    else{
      x = x*fatt(n-1, x);
      return x;
    }
}


