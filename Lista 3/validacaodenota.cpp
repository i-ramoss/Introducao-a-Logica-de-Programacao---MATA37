#include <iostream>

using namespace std;

int main () {

  double nota,media=0;
  int cont=0;

  while (cont<=1){
    cin >> nota;
    if (nota>=0 && nota<=10){
      media+=nota;
      cont++;
    }
    else
      cout << "nota invalida\n";
   }
   cout << "media = " << media/2 << endl;

return 0;
}
