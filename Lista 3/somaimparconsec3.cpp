#include <iostream>

using namespace std;

int main() {

  int N,X,Y,soma=0;
  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> X >> Y;
    for (int j=0; j<Y; j++){
      if (X%2!=0) {
        soma += X;
        X+=2;
      }
      else{
        X+=1;
        soma+=X;
        X+=2;
      }
    }
    cout << soma << endl;
    soma=0;
  }

return 0;
}
