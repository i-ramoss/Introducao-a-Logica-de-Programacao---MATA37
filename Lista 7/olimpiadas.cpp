#include <iostream>

using namespace std;

int main () {

  int num, modos, med, maior, aux;
  cin >> num >> modos;

  int paises[num+1]={0}, indices[num+1]={0};

  for (int i=0; i<modos; i++){
    for (int j=0; j<3; j++) {
      cin >> med;
      paises[med]++;
      indices[med]++;
    }
  }

  for (int i=0; i<num; i++){
    maior = i;
    for (int j=i+1; j<num+1; j++){
      if (paises[j] > paises[maior])
        maior = j;
    }
    aux = paises[i];
    paises[i] = paises[maior];
    paises[maior] = aux;
  }

  for (int i=0; i<num; i++){
    for (int j=i+1; j<num+1; j++){
      if (paises[i] == paises[j]) {
        paises[i] = -1;
      }
    }
  }

  for (int i=0; i<num; i++) {
    for (int j=0; j<num+1; j++) {
      if (paises[i] == indices[j])
        cout << j << " ";
    }
  }

return 0;
}

// leio o time que recebeu a medalha
// incremento +1 na posição desse time no vetor paises
// ordeno
// imprimir a posição de maior valor
// se os valores forem iguais, imprimir a menor posição
