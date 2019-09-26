#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  double nota,media=0;
  int cont=0, X;

  while (cont<=1){
    cin >> nota;
    if (nota>=0 && nota<=10){
      media+=nota;
      cont++;
      if (cont==2){
        cout << fixed << setprecision(2) << "media = " << media/2 << endl;
        cout << "novo calculo (1-sim 2-nao)\n";
        while (cin >> X){
          if (X<1 || X>2)
            cout << "novo calculo (1-sim 2-nao)\n";
          else {
            if (X==1) {
              cont=0;
              media=0;
              break;
            }
            else
              break;
          }
        }
      }
    }
    else
      cout << "nota invalida\n";
   }

return 0;
}
 // ler as duas notas
 // se a nota for fora do intervalo, mostrar "nota invalida"
 // quando duas notas forem validas, imprimir "media", imprimir a mensagem "novo calculo" e ai ler um valor X, se X for maior que 2 ou menor que 1, imprimir novamente a mensagem, se X==1, zera o contador, zera a media e reinicia o programa, se X==2, sai do programa;
