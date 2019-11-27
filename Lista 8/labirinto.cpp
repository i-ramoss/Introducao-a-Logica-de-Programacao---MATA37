#include <iostream>
#include <string>

using namespace std;

int main () {

  int nchave, nporta, meio;
  cin >> nchave;

  int id[nchave];
  string rspp = "Sim\n";

  for (int i=0; i<nchave; i++)
    cin >> id[i];

  cin >> nporta;
  int porta[nporta];

  for (int i=0; i<nporta; i++){
    cin >> porta[i];

    int esq=0, dir=nchave-1;

    while (esq<=dir){
      meio = (esq+dir)/2;

      if (porta[i] < id[meio])
        dir=meio-1;
      else if (porta[i] > id[meio])
        esq = meio+1;
      else
        break;
    }

    if (porta[i] != id[meio]) {
      rspp = "Não\n";
      break;
    }
  }

  cout << rspp;

return 0;
}
