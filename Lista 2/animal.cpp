#include <iostream>

using namespace std;

int main () {

  string animal;
  cin >> animal;

  if (animal == "vertebrado") {
    cin >> animal;
    if (animal == "ave") {
      cin >> animal;
      if (animal == "carnivoro")
        cout << "aguia\n";
      else
        cout << "pomba\n";
    }
    else {
      cin >> animal;
      if (animal == "onivoro")
        cout << "homem\n";
      else
        cout << "vaca\n";
    }
  }
  else {
    cin >> animal;
    if (animal == "inseto") {
      cin >> animal;
      if (animal == "hematofago")
        cout << "pulga\n";
      else
        cout << "lagarta\n";
    }
    else {
      cin >> animal;
      if (animal == "hematofago")
        cout << "sanguessuga\n";
      else
        cout << "minhoca\n";
    }
  }

return 0;
}
