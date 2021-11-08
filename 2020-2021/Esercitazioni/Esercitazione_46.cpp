#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string parola;
    int lunghezza, palindroma, p, i=0;
    cout << "Dimmi una parola: " << endl;
    cin >> parola;
    lunghezza = parola.size();
    for(i=0; i<lunghezza; i++){
        parola[i]=tolower(parola[i]);
    }
    cout << parola << endl;
    i=0;
    p=lunghezza-1;
    palindroma = 1;
    while(palindroma == 1 && i<p){
        if(parola[i] != parola[p]){
            palindroma = 0;
        }
        i++;
        p--;
    }
    if(palindroma == 1){
        cout << "La parola e' palindroma" << endl;
    }
    else{
        cout << "La parola non e' palindroma" << endl;
    }
    return 0;
}
