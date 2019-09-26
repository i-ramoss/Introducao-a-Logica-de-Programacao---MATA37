#include <iostream>

using namespace std;

int main () {

  int tam;
  cin >> tam;
  int va[tam], vb[tam], vc[tam];

  for(int i=0; i<tam; i++) {
    cin >> va[i];
  }

  for(int i=0; i<tam; i++) {
    cin >> vb[i];
  }

  for(int i=0; i<tam; i++) {
    vc[i] = va[i]+ vb[i];
  }

  for(int i=0; i<tam; i++) {
    cout << vc[i] << " ";
  }
  cout << endl;


return 0;
}
