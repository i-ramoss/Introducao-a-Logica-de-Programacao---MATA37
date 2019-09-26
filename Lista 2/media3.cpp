#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  float N1,N2,N3,N4,media,exame;
  cin >> N1 >> N2 >> N3 >> N4;
  media = (N1*2 + N2*3 + N3*4 + N4*1)/10;

  cout << fixed << setprecision(1) << "Media: " << media << endl;

  if (media>=7)
    cout << "Aluno aprovado.\n";
  else if (media<5)
    cout << "Aluno reprovado.\n";
  else {
    cout << "Aluno em exame.\n";
    cin >> exame;
    cout << "Nota do exame: " << exame << endl;
    media = (media+exame)/2;
    if (media>=5)
      cout << "Aluno aprovado.\n";
    else
      cout << "Aluno reprovado.\n";
    cout << "Media final: " << media << endl;
  }


return 0;
}
