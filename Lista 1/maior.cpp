#include <iostream>

using namespace std;

int main () {

 int a,b,c;
 cin >> a >> b >> c;
 int m1 = (a+b+abs(a-b))/2;
 int m2 = (m1+c+abs(m1-c))/2;

 cout << m2 << " eh o maior\n";

return 0;
}
