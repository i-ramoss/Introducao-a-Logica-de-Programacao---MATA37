#include <iostream>

using namespace std;

int main () {

  int tam, meio, chave, aux;

  cin >> tam;
  cin >> chave;

  int vagas[tam];

  for (int i=0; i<tam; i++)
    cin >> vagas[i];

  for (int i=0; i<tam-1; i++) {
    int menor = i;

    for (int j=i+1; j<tam; j++) {
      if (vagas[j] < vagas[menor])
        menor=j;
    }
    aux = vagas[i];
    vagas[i] = vagas[menor];
    vagas[menor] = aux;
  }

  int esq=0, dir=tam-1;

 while (esq<=dir) {
  meio = (esq+dir)/2;

  if (chave < vagas[meio])
    dir = meio-1;
  else if (chave > vagas[meio])
    esq = meio+1;
  else
    break;
 }

 if (chave == vagas[meio])
  cout << "Mota na moto\n";
 else
  cout << "Mota\n";

return 0;
}
