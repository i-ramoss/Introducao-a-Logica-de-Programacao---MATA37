#include <iostream>
#include <string>

using namespace std;

int main () {

  int num, cont=0;
  string balao;
  
  cin >> num;
  cin >> balao;
  
  if (balao[0] != balao[(num-1)/2] && balao[0] != balao[num-1] && balao[num-1] != balao[(num-1)/2])
    cout << "Sim\n";
  
  else
    cout << "Nao\n";

return 0;
}
