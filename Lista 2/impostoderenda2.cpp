#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double din,imposto=0;
  cin >> din;
  double dif;

  if (din>4500){
    dif = din - 4500;
    imposto = (1000*0.08 + 1500*0.18 + dif*0.28);
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }
  else if (din>3000) {
    dif = din - 3000;
    imposto = (1000*0.08 + dif*0.18);
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }
  else if (din>2000){
    dif = din - 2000;
    imposto = dif*0.08;
    cout << fixed << setprecision(2) << "R$ " << imposto << endl;
  }
  else
    cout  << "Isento\n";

return 0;
}
