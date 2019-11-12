#include <iostream>

using namespace std;

int main () {

  int n, x, k, aux, c1=0, c2=0;
  cin >> n;

  int time1[n], time2[n];

  for (int i=0; i<n; i++){
    cin >> x;
    if (x%3==0){
      time1[c1]=x;
      c1++;
    }
    else {
      time2[c2]=x;
      c2++;
    }
  }

  for (int i=0; i<c1-1; i++){
    k=i;
    for (int j=i+1; j<c1; j++){
      if (time1[j] > time1[k])
        k=j;
    }
    aux = time1[i];
    time1[i] = time1[k];
    time1[k] = aux;
  }

  for (int i=0; i<c2-1; i++){
    k=i;
    for (int j=i+1; j<c2; j++){
      if (time2[j] < time2[k])
        k=j;
    }
    aux = time2[i];
    time2[i] = time2[k];
    time2[k] = aux;
  }

  for (int i=0; i<c1; i++)
    cout << time1[i] << endl;
  for (int i=0; i<c2; i++)
    cout << time2[i] << endl;

}
// ordenar do maior pro menor,quando divisível por 3
// ordenar do menor pro maior, quando não divisível por 3;
