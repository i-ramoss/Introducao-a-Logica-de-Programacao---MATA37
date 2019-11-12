#include <iostream>
#include <string>

using namespace std;

int main () {

  int n, menor;
  string aux;

  cin >> n;
  cin.ignore();

  string chamada[n];

  for (int i=0; i<n; i++)
    getline(cin, chamada[i]);

  for (int i=0; i<n-1; i++){
    menor = i;

    for (int j=i+1; j<n; j++) {
      if (chamada[j] < chamada[menor])
        menor = j;
    }

    aux = chamada[i];
    chamada[i] = chamada[menor];
    chamada[menor] = aux;
  }

  for (int i=0; i<n; i++)
    cout << chamada[i] << endl;

return 0;
}
