#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  float salario, reaj;
  cin >> salario;

  if (salario>=0 && salario<=400) {
    reaj = salario * 0.15;
    cout << fixed << setprecision(2) << "Novo salario: " << salario + reaj << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: 15 %\n";
  }
  else if (salario>400 && salario<=800) {
    reaj = salario * 0.12;
    cout << fixed << setprecision(2) << "Novo salario: " << salario + reaj << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: 12 %\n";
  }
  else if (salario>800 && salario<=1200) {
    reaj = salario * 0.10;
    cout << fixed << setprecision(2) << "Novo salario: " << salario + reaj << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: 10 %\n";
  }
  else if (salario>1200 && salario<=2000) {
    reaj = salario * 0.07;
    cout << fixed << setprecision(2) << "Novo salario: " << salario + reaj << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: 7 %\n";
  }
  else if (salario>2000) {
    reaj = salario * 0.04;
    cout << fixed << setprecision(2) << "Novo salario: " << salario + reaj << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: 4 %\n";
  }

return 0;
}
