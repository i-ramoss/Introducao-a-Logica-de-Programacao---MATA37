#include <iostream>
#include <string>

using namespace std;

int main () {

  int lin, col, xc, yc, xb, yb, xe, ye, xd, yd, cont=0;
  cin >> lin >> col;
  
  char foto[lin][col];
  
  for (int i=0; i<lin; i++){
    for (int j=0; j<col; j++){
      cin >> foto[i][j];
    }
  }
  
  for (int i=1; i<=lin-2; i++){
    for (int j=1; j<=col-2; j++){
      if (foto[i][j]=='1') {
        xc = i-1;
        yc = j;
        cont++;
        break;
      }
    }
    if (cont!=0)
      break;
  }
  cont=0;
  
  for (int i=lin-2; i>0; i++){
    for (int j=1; j<=col-2; j++){
      if (foto[i][j]=='1') {
        xb = i+1;
        yb = j;
        cont++;
        break;
      }
    }
    if (cont!=0)
      break;
  }
  cont=0;
  
  for (int j=1; j<=col-2; j++){
    for (int i=1; i<=lin-2; j++){
      if (foto[i][j]=='1') {
        xe = i-1;
        ye = j-1;
        cont++;
        break;
      }
    }
    if (cont!=0)
      break;
  }
  cont=0;
  
   for (int j=col-2; j>0; j++){
    for (int i=1; i<=lin-2; j++){
      if (foto[i][j]=='1') {
        xd = i-1;
        yd = j+1;
        cont++;
        break;
      }
    }
    if (cont!=0)
      break;
  }
  
  for (int j=ye; j<yd; j++) {
    foto[xc][j] = '*';
  }
  
  for (int j=ye; j<yd; j++) {
    foto[xb][j] = '*';
  }
  
  for (int i=xc; i<xb; i++) {
    foto[i][ye] = '*';
  }
  
  for (int i=xc; i<xb; i++) {
    foto[i][yd] = '*';
  }
  
  for (int i=0; i<lin; i++) {
    for (int j=0; j<col; j++) {
      cout << foto[i][j] << " ";
    }
    cout << endl;
  }

return 0;
}
