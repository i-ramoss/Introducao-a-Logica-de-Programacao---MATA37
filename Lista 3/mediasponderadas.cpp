#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  double N,a,b,c,media;
  cin >> N;

  for (int i=0; i<N; i++){
    cin >> a >> b >> c;
    media = (a*2 + b*3 + c*5)/10;
    cout << fixed << setprecision(1) << media << endl;
  }

return 0;
}
