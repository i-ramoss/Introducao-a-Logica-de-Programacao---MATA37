#include <iostream>

using namespace std;

int main() {

  int inter, gremio, ginter=0, ggremio=0, partida=0, novo=1, vinter=0 ,vgremio=0, empate=0;

  while (cin >> inter >> gremio) {
    ginter+=inter; ggremio+=gremio;
    partida++;

    if (ginter > ggremio)
      vinter++;
    else if (ginter < gremio)
      vgremio++;
    else
      empate++;

    cout << "Novo grenal (1-sim 2-nao)\n";
    cin >> novo;

    if (novo==1){
      ginter=0; ggremio=0;
    }
    else {
      cout << partida << " grenais\n";
      cout << "Inter:" << vinter << endl;
      cout << "Gremio:" << vgremio << endl;
      cout << "Empates:" << empate << endl;

      if (vinter > vgremio) {
        cout << "Inter venceu mais\n";
        break;
      }
      else {
        cout << "Gremio venceu mais\n";
        break;
      }
    }
  }



return 0;
}
