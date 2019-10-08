#include <iostream>
#include <string>

using namespace std;

int main () {

  int nlivro, nconso, cont;
  string book;
  cin >> nlivro >> nconso;
  cin.ignore();

  for (int i=0; i<nlivro; i++){
    cont=0;
    getline(cin,book);

    for (int j=0; j<book.size(); j++){
      if (book[j] != 'a' && book[j] != 'e' && book[j] != 'i' && book[j] != 'o' && book[j] != 'u' && book[j] != ' ')
        cont++;
    }

    if (cont>nconso)
      cout << "0\n";
    else
      cout << "1\n";
  }

return 0;
}

