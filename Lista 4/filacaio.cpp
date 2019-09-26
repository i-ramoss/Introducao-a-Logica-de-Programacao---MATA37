#include <iostream>

using namespace std;

int main() {

  int n,i;
  cin>>n;
  int fila[n];

  for(i=0;i<n;i++){
    cin>>fila[i];
  }

  for(i=0;i<n;i++){
   if(fila[i]%2!=0){
     cout<<fila[i]<<endl;
   }

   }

  for(i=0;i<n;i++){
   if(fila[i]%2==0){
    cout<<fila[i]<<endl;
    }

  }
return 0;
}
