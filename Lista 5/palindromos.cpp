#include <iostream>
#include <string>

using namespace std;

int main () {

  string palavra;
  
  cin >> palavra;
  int tam = palavra.size();
  
  string teste = palavra;
  
  
  for (int i=0; i<tam; i++) {
    teste[tam-1-i] = palavra[i];
  }
  
  if (teste == palavra)
    cout << "Sim\n";
  else
    cout << "Nao\n";
    
return 0;
}
