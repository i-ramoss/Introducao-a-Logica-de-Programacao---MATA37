#include <iostream>

using namespace std;

long long cria(int c);

int main () {

  int c;
  cin >> c;
  cout << cria(c)*2 << endl;

return 0;
}

long long cria(int c) {
  if (c==1)
    return c;
  else
    return 3*cria(c-1)+1;
}
