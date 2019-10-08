#include <iostream>
#include <string>

using namespace std;

int main () {

	string pessoa, doenca, res ="Nao possui sequencia\n";
	
	cin >> doenca;
	cin >> pessoa;
		
	for (int i=0; i<pessoa.size(); i++) {
		if (pessoa[i] == doenca[0] && pessoa[i+1] == doenca[1] && pessoa[i+2] == doenca[2]) 
			res = "Possui sequencia\n";
	}
	
	cout << res; 
	
return 0;
}

