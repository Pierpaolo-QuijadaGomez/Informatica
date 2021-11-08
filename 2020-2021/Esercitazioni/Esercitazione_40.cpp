#include <iostream>

using namespace std;

float calcoloMedia(int vet[], int N);

int main() {
    const int N = 10;
    int media;
    int vet[N]={17, 23, 45, 12, 34, 16, 19, 28, 16, 18};
    media = calcoloMedia(vet, N);
    cout << "La media vale : " << media << endl;
}
float calcoloMedia(int vet[],int N ){
    int i;
    int tot=0;
    int media=0;
    for(i=0;i<N;i++){
        tot=tot+vet[i];
    }
    media=tot/N;
    return media;
}


