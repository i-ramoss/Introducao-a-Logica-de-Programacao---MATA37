#include <iostream>
#include <string>

using namespace std;

int main () {

  int n, aux, menor;
  cin >> n;

  int notas[n];
  string alunos[n], aux2;

  for (int i=0; i<n; i++)
    cin >> notas[i] >> alunos[i];

  for (int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (notas[j] > notas[i]) {
        aux = notas[i];
        aux2 = alunos[i];
        notas[i] = notas[j];
        alunos[i] = alunos[j];
        notas[j] = aux;
        alunos[j] = aux2;
      }
      if (notas[j] == notas[i]){
        if (alunos[j] < alunos[i]) {
          aux2 = alunos[i];
          alunos[i] = alunos[j];
          alunos[j] = aux2;
        }
      }
    }
  }

  for (int i=0; i<n; i++){
    cout << notas[i] << " " << alunos[i] << endl;
  }

return 0;
}
