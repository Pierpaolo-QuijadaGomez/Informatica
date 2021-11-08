#include <iostream>
using namespace std;

const int DIM = 50;   // num elementi

void mostraVettore(int vet[], int N){
  int i;
  for (i=0; i<N; i++)
    cout << vet[i] << " ";
  cout << endl;
}

void riempiCasuale(int vet[], int N){
  int i;
  for (i=0; i<N; i++){
      cout << "Valore della cella " << i << ": ";
      cin >> vet[i];
  }
}

// procedura ordinamento per selezione
void selSort(int vet[], int N){
  int i, j, temp, pos_max;

  for (i=0; i<N-1; i++){
    pos_max=i;    //ipotizzo che il minimo sia il primo a sinistra
    for(j=i+1;j<N; j++)
      if (vet[j]>vet[pos_max]) pos_max=j;  //cerco posiz. del minimo

    temp=vet[pos_max];  //scambio il minimo col primo a sinistra
    vet[pos_max]=vet[i];
    vet[i]=temp;
  }
}

int main(void) {
    int vettore[DIM], N;

    do{
        cout << "Inserire la dimensione logica: ";
        cin >> N;
    } while (N<=0 || N>=DIM);
    
    riempiCasuale(vettore, N);
    cout << "\n\nVettore non ordinato:\n";
    mostraVettore(vettore, N);

    selSort(vettore, N);

    cout << "\n\nVettore ordinato:\n";
    mostraVettore(vettore, N);

    return 0;
}