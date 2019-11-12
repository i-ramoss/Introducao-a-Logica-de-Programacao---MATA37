#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  int n, maior;
  double aux;

  cin >> n;

  double tmp[n];

  for (int i=0; i<n; i++)
    cin >> tmp[i];

  for (int i=0; i<n-1; i++) {
    maior = i;

    for (int j=i+1; j<n; j++) {
      if (tmp[j] > tmp[maior])
        maior = j;
    }
    aux = tmp[i];
    tmp[i] = tmp[maior];
    tmp[maior] = aux;
  }

  for (int i=0; i<3; i++) {
    cout << fixed << setprecision(2) << tmp[i] << endl;
  }

return 0;
}
