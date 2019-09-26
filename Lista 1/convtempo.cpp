#include <iostream>

using namespace std;

int main () {

  int N;
  cin >> N;

  int hora=N/3600, min=(N%3600)/60, seg=N%60;

  cout << hora << ":" << min << ":" << seg << endl;



return 0;
}
