#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  double A, B, C, media;
  cin >> A >> B >> C;

  media = ((A*2)+(B*3)+(C*5))/10;

  cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

return 0;
}
