#include <iostream>
#include <string>

using namespace std;

int main () {

 string msg;
 
 getline(cin,msg);
 
 for (int i=0; i<msg.size(); i++){
  if (msg[i] >= 65 && msg[i] <= 90) 
    cout << msg[i];
 }
 cout << endl;


return 0;
}
