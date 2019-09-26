#include <iostream>

using namespace std;

int main () {

  int N, T, X, Y;
  cin >> N;
  string p[N], aux;

  for (int i=0; i<N; i++)
    cin >> p[i];

  cin >> T;

  for (int i=0; i<T; i++){
    cin >> X >> Y;
    aux = p[X];
    p[X] = p[Y];
    p[Y] = aux;
  }

  for (int i=0; i<N; i++)
    cout << p[i];

return 0;
}
