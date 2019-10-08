#include <iostream>
#include <string>

using namespace std;

int main () {

  int cont=0;
  string letras, palavra;
  cin >> letras; 
  cin >> palavra;
  
  for (int i=0; i<palavra.size(); i++){
    for (int j=0; j<letras.size(); j++) {
      if (letras[j] == palavra[i]) {
        letras[j] = '0';
        cont++;
        break;
      }
    }
  }
  
  if (cont == palavra.size())
    cout << "Eh possivel\n";
  else
    cout << "Impossivel\n"; 

return 0;
}
