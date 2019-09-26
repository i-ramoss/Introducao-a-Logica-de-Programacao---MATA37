#include <iostream>

using namespace std;

int main () {

  int N,aux,par;
  cin >> N;
  int S[N];

  for (int i=0; i<N; i++)
    cin >> S[i];

  for (int i=0; i<N-1; i++){
    if (S[i]%2==0) {
      for (int j=i+1; j<N; j++){
        if (S[j]%2!=0) {
          aux = S[i];
          S[i] = S[j];
          S[j] = aux;
          break;
        }
      }
    }
  }

  for (int i=0; i<N-1; i++){
    par=i;
    for (int j=i+1; j<N; j++){
      if (S[par]%2==0) {
        if (S[j]<S[par]){
          aux = S[j];
          S[j] = S[par];
          S[par] = aux;
        }
      }
    }
  }

  for (int i=0; i<N; i++){
    cout << S[i] << endl;
  }

return 0;
}




// ler os valores de S
// rodar o vetor e ver se o valor na posição [i] é par
// se o valor for par, rodar o vetor em busca de um valor ímpar
// ao achar o valor ímpar, trocar o valor par com o valor ímpar
// fazer isso N-1 vezes;
// ordenar a parte par do vetor do menor pro maior;
