#include <iostream>

using namespace std;

int main () {

  int S, N, P, j;
  cin >> S >> N;
  int pedras[N]={0};

  for (int i=0; i<S; i++) {
    cin >> P;
    int v = N/P;
    for (j=0; j<=v; j++) {
      pedras[j*P]=1;
    }
  }

  for (int i=0; i<N; i++)
    cout << pedras[i] << " ";

return 0;
}

// ler o número de sapos e ler quantas pedras existem
// zerar o vetor;
// ler o tamanho do pulo do sapo
// o sapo irá pular de P em P pedras
// incrementar 1 pra cada pedra que o sapo pular;
// imprimir o vetor pedras
