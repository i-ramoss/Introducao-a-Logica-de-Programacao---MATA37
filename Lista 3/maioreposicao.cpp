#include <iostream>

using namespace std;

int main () {

  int num, ind, maior=0;

  for (int i=1; i<=100; i++){
    cin >> num;
    if (num > maior){
      maior = num;
      ind = i;
    }
  }

  cout << maior << endl << ind << endl;

return 0;
}
