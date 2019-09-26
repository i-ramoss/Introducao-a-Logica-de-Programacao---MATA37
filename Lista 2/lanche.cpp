#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  int codigo, qnt;
  cin >> codigo >> qnt;

  switch (codigo) {
    case 1:
      cout << fixed << setprecision(2) <<"Total: R$ " << 4.00*qnt << endl; break;
    case 2:
      cout << fixed << setprecision(2) <<"Total: R$ " << 4.50*qnt << endl; break;
    case 3:
      cout << fixed << setprecision(2) <<"Total: R$ " << 5.00*qnt << endl; break;
    case 4:
      cout << fixed << setprecision(2) <<"Total: R$ " << 2.00*qnt << endl; break;
    case 5:
      cout << fixed << setprecision(2) <<"Total: R$ " << 1.50*qnt << endl; break;
  }

return 0;
}
