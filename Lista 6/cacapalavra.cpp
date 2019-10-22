#include <iostream>
#include <string>

using namespace std;

int main () {

  int lin, col, cont=0;
  cin >> lin >> col;

  string palavra, fim="Nao\n";
  char matriz[lin][col];

  for (int i=0; i<lin; i++){
    for (int j=0; j<col; j++){
      cin >> matriz[i][j];
    }
  }

  cin >> palavra;

  for (int i=0; i<lin; i++){
    for (int j=0; j<col; j++){
      if (palavra[cont] == matriz[i][j])
        cont++;
      else
        cont=0;
      if (cont == palavra.size())
        fim = "Sim\n";
    }
  }


  for (int j=0; j<col; j++) {
    for (int i=0; i<lin; i++){
      if (palavra[cont] == matriz[i][j])
        cont++;
      else
        cont=0;
      if (cont == palavra.size())
        fim = "Sim\n";
    }
  }

  cout << fim;


return 0;
}

