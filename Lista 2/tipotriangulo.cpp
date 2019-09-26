#include <iostream>

using namespace std;

int main () {

  double A,B,C,auxA,auxB,auxC;
  cin >> A >> B >> C;

  if (B>=A && B>=C) {
    auxA=B;
    auxB=A;
    auxC=C;
  }
  else if (C>=A && C>=B){
    auxA=C;
    auxB=B;
    auxC=A;
  }
  else if (A>=C && A>=B){
    auxA=A;
    auxB=B;
    auxC=C;
  }

  if (auxA>=(auxB+auxC)) {
    cout << "NAO FORMA TRIANGULO\n";
    return 0;
  }
  if ((auxA*auxA) == ((auxB*auxB)+(auxC*auxC)))
    cout << "TRIANGULO RETANGULO\n";
  if ((auxA*auxA) > ((auxB*auxB)+(auxC*auxC)))
    cout << "TRIANGULO OBTUSANGULO\n";
  if ((auxA*auxA) < ((auxB*auxB)+(auxC*auxC)))
    cout << "TRIANGULO ACUTANGULO\n";
  if (auxA == auxB && auxB == auxC)
    cout << "TRIANGULO EQUILATERO\n";
  if ((auxA == auxB) && auxA != auxC)
    cout << "TRIANGULO ISOSCELES\n";
  if ((auxB == auxC) && auxB != auxA)
    cout << "TRIANGULO ISOSCELES\n";
  if ((auxA == auxC) && auxA != auxB)
    cout << "TRIANGULO ISOSCELES\n";

}
