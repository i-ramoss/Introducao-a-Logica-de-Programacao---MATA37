#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  int num, horas;
  float valor;
  cin >> num >> horas >> valor;

  cout << "NUMBER = " << num << endl;
  cout << fixed << setprecision(2) << "SALARY = U$ " << horas*valor << endl;


return 0;
}
