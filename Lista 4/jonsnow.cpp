#include <iostream>

using namespace std;

int main () {

  int H,C,O,D,t=1;

  while (cin >> H >> C){

    int racao[101]={0};
    int maior=0, pos;
    if (H==0 && C==0)
      break;

    for (int i=0; i<C; i++){
      cin >> O >> D;
      racao[O]++;
      racao[D]++;
    }

    for (int i=1; i<=H; i++){
      if (racao[i] >= maior) {
        pos = i;
        maior = racao[i];
      }
    }

    cout << "Teste " << t << endl;
    t++;

    for (int i=1; i<=H; i++){
      if (racao[i] == racao[pos])
        cout << i << " ";
    }
    cout << endl;

  }

return 0;
}


// cada caso quando enviava ou recebia uma carta deveria alimentar o corvo com uma ração
// cada corvo consome 1 pacote de ração, antes de viajar e 1 pacote quando chega;
// quando não tinha alimento o corvo desaparecia (-1 corvo);
// programa que, a partir de uma listagem de casas e cartas transmitidas (enviadas e recebidas) em 1 dia, responder qual casa precisa de mais pacote de ração para o próximo diad e viagem

// H = número de casas; C = cartas transmitidas (enviadas e recebidas);
//
