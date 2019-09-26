#include <iostream>

using namespace std;

int main () {

  int X,Y,soma=0,aux;
  cin >> X >> Y;

  if (Y>X){
    aux=X;
    X=Y;
    Y=aux;
  }

  for(int i=Y+1; i<X; i++) {
    if (i%2!=0)
      soma+=i;
   }

  cout << soma << endl;

return 0;
}
