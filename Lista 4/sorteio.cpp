#include <iostream>

using namespace std;

int main () {

  int N, id[101]={0}, num, maior=0, pos=0;
  cin >> N;

  for (int i=0; i<N; i++){
    cin >> num;
    id[num]++;
  }

  // for (int i=0; i<101; i++){
  //   if(id[i] >= pos){
  //     pos = i;
  //   }
  // }

  for (int i=0; i<101; i++){
    if (id[i] >= maior){
      pos = i;
      maior = id[i];
    }
  }

  cout << pos << endl;

return 0;
}
