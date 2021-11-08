#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

float c1, c2, ipot;
bool dimensioni;

void InsDati();
void Stampa();
float CalcolaPerim();
float perimetro();
bool dimensione();


int main(){
    InsDati();
    CalcolaPerim();
    Stampa();
}

void InsDati(){
    cout<<endl;
    cout<<"   Inserire il primo cateto: ";
    cin>>c1;
    cout<<"   Inserire il secondo cateto: ";
    cin>>c2;
}

float CalcolaPerim(){

    ipot = sqrt(c1*c1 + c2*c2);
    perimetro();
}
float perimetro(){
    return c1 + c2 + ipot;
}

void Stampa(){
    cout.precision(3);
    cout<<"\n   Il perimetro vale "<<perimetro()<<endl;
    dimensione();
    if (dimensioni == true){
        cout << "   Il triangolo e' grande" << endl;
    }
    else{
        cout << "   Il triangolo e' piccolo" << endl;
    }
}
bool dimensione(){
    if (perimetro() >= 50){
        dimensioni = true;
    }
    else{
        dimensioni = false;
    }
    return dimensione;
}


