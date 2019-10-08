#include <iostream>
#include <string>

using namespace std;

int main () {

  string senha, cod;
  int num;
  
 for(int i=0; i<6; i++){
    cin >> senha;
    num = senha.size();
    
    if (num==1)
      cod+="1";
    else if (num==2)
      cod+="2";
    else if (num==3)
      cod+="3";
    else if (num==4)
      cod+="4";
    else if (num==5)
      cod+="5";
    else if (num==6)
      cod+="6";
    else if (num==7)
      cod+="7";
    else if (num==8)
      cod+="8";
    else if (num==9)
      cod+="9";
    else if (num==10)
      cod+="10";
 }
 
  cout << cod << endl;

return 0;
}
