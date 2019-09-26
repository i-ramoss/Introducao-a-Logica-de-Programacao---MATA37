#include <iostream>

using namespace std;

int main () {

  int N;
  cin >> N;
  int vetor[N];

  for (int i=0; i<N; i++)
    cin >> vetor[i];

  for (int i=N-1; i>=0; i--){
    int j=i-1;
    while (vetor[j] <= vetor[i])
      vetor[j]++;
  }

  for (int i=0; i<N; i++){
    cout << vetor[i] << " ";
  }

return 0;
}
