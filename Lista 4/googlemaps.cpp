#include <iostream>

using namespace std;

int main () {

  int N;
  cin >> N;
  int rua[N];

  for (int i=0; i<N; i++)
    cin >> rua[i];
  for (int i=N-1; i>=0; i--)
    cout << rua[i] << " ";

return 0;
}
