#include <iostream>

using namespace std;

int main () {

  int M=1,N=1,aux,soma=0;

  while (cin >> M >> N){
    if(M>0 && N>0) {
      if(N>M){
        aux = M;
        M = N;
        N = aux;
      }

      for (int i=N; i<=M; i++){
        soma += i;
        cout << i << " ";
      }
      cout << "Sum=" << soma << endl;
      soma=0;
      }
      else
        break;
    }

return 0;
}
