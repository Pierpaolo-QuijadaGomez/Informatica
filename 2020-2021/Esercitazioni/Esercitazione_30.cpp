#include <iostream>

using namespace std;
float Calcolo_classe();
float perc_maschi_classe, perc_femmine_classe, perc_maschi_scuola, perc_femmine_scuola;
int somma_femmine, somma_maschi;


int main()
{
    int num_classi;
    cout << "Quante classi ci sono?" << endl;
    cin >> num_classi;
    for(int i = num_classi; i != 0; i--){
        Calcolo_classe();
        }
    perc_femmine_scuola = (float)somma_femmine / (somma_femmine + somma_maschi) * 100;
    perc_maschi_scuola = (float)somma_maschi/ (somma_femmine + somma_maschi) * 100;
    cout << "La percentuale dei maschi nella sucola equivale a: " << perc_maschi_scuola << endl;
    cout << "La percentuale delle femmine nella scuola equivae a: " << perc_femmine_scuola << endl;
    return 0;
}
float Calcolo_classe(){
    double num_maschi, num_femmine, somma_classe;
    cout << "Quante maschi ci sono?" << endl;
    cin >> num_maschi;
    cout << "Quante femmine ci sono?" << endl;
    cin >> num_femmine;
    somma_maschi = num_maschi + somma_maschi;
    somma_femmine = num_femmine + somma_femmine;
    somma_classe = num_maschi + num_femmine;
    perc_maschi_classe = num_maschi / somma_classe * 100;
    perc_femmine_classe = num_femmine / somma_classe * 100;
    cout << "La percentuale dei maschi equivale a: " << perc_maschi_classe << endl;
    cout << "La percentuale delle femmine equivale a: " << perc_femmine_classe << endl;
    return 0;
}
