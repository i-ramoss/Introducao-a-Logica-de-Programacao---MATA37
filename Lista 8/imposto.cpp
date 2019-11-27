#include <iostream>
#include <string>

using namespace std;

int main () {

  long long num, meio, esq, dir, cont=0, qnt;
  string chave;
  cin >> qnt;

  long long imposto[qnt];
  string planeta[qnt];

  for (int i=0; i<qnt; i++)
    cin >> planeta[i] >> imposto[i];

  cin >> num;

  for (int i=0; i<num; i++) {
  cin >> chave;

  esq=0, dir=qnt-1;

  while (esq<=dir) {
    meio = (esq+dir)/2;

    if (chave < planeta[meio])
      dir = meio-1;
    else if (chave > planeta[meio])
      esq = meio+1;
    else
      break;
  }

  if (chave == planeta[meio])
    cont += imposto[meio];
  }

  cout << cont << endl;

return 0;
}
