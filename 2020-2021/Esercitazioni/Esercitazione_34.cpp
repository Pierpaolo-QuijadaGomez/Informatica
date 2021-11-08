#include <iostream>
#include <cmath>

using namespace std;

void area_perim(float raggio, float &area, float &perim);
int main(){
float raggio, area, perim;
    cout << "Valore del raggio: " << endl;
    do{
        cin >> raggio;
    } while(raggio <= 0);
    area_perim(raggio, area, perim);
    cout << "Valore dell'area: " << area << endl;
    cout << "Valore del perimetro: " << perim << endl;
    return 0;
}
void area_perim(float raggio, float &area, float &perim){
    area = raggio*raggio*M_PI;
    perim = 2*raggio*M_PI;
}


