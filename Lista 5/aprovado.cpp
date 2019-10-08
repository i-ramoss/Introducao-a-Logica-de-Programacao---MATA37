#include <iostream>
#include <string>

using namespace std;

int main () {

  string mininu, res="Vamos esperar a 2a chamada\n";
  int num;

  getline(cin,mininu);
  cin >> num;
  cin.ignore();
  string aproved[num];

  for (int i=0; i<num; i++){
    getline(cin,aproved[i]);
  }

  for (int i=0; i<num; i++){
    if (aproved[i] == mininu)
      res = "PARABENS\n";
  }

  cout << res;

return 0;
}


