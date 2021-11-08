#include <iostream>
#include <cmath>

using namespace std;

float Area(float raggio);
float Perimetro(float raggio);

int main()
{
    float raggio;
    cout << "\tValore del raggio: " << endl;
    do{
    cin >> raggio;
    }while(raggio <= 0);
    cout << "\t L'area vale: " << Area(raggio) << endl;
    cout << "\tIl perimetro vale: " << Perimetro(raggio) << endl;
}
float Area(float raggio){
    float area;
    area = (M_PI*M_PI) * raggio;
    return area;
}
float Perimetro(float raggio){
    float perimetro;
    perimetro = (2*M_PI)*raggio;
    return perimetro;
}
//valore pigerco nella liberia <cmath>