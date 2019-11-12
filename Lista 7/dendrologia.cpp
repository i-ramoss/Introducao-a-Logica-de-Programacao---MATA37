#include <iostream>
#include <string>

using namespace std;

int main () {

  int num, max, aux1, maior;
  string aux2;

  cin >> num >> max;

  int tree[num];
  string nometree[num];

  for (int i=0; i<num; i++) {
    cin >> nometree[i] >> tree[i];
  }

  for (int i=0; i<num-1; i++) {
    maior = i;

    for (int j=i+1; j<num; j++) {
      if (tree[j] > tree[maior])
        maior = j;
    }
      aux1 = tree[i];
      aux2 = nometree[i];

      tree[i] = tree[maior];
      nometree[i] = nometree[maior];

      tree[maior] = aux1;
      nometree[maior] = aux2;
  }

  for (int i=0; i<max; i++)
    cout << nometree[i] << endl;



return 0;
}
