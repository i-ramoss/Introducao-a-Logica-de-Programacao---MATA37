#include <iostream>

using namespace std;

int main() {

int h1, h2, h;
cin >> h1 >> h2;

	if (h1 >= h2)
		h = (h2+24) - h1;
	else
		h = h2-h1;

	cout << "O JOGO DUROU " << h << " HORA(S)\n";

return 0;
}
