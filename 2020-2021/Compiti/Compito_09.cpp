#include <iostream>

using namespace std;

int fatt(int n);

int main(){
    int n;

    do{
      cout << "Inserisci il valore n: ";
      cin >> n;
    }while (n<=0);

    fatt(n);
    return 0;
}

int fatt(int n) {

    if(n==0) return 0;
    else{
        cout <<"* ";
        fatt(n-1);
    }
    return 0;
}
