#include <iostream>

using namespace std;

int main () {

  int N, soma=0;
  cin >> N;
  int x[N];

  for (int i=0; i<N; i++){
    cin >> x[i];
    soma += x[i];
  }

  int media=soma/N;

  for (int i=0; i<N; i++){
    if (x[i]>=media)
      cout << x[i] << ": Sim!\n";
    else
      cout << x[i] << ": Nao!\n";
  }

return 0;
}
