#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  bool lampada_A = false, lampada_B = false;
  int num;

  cout << "Informe um número de vezes que você acionou os interruptores?: ";
  cin >> num;

  for (int i = 0; i < num; i++) {

    int interruptor_Opc;
    cout << "Qual interruptor você acionou (1|2)? ";
    cin >> interruptor_Opc;
    if (interruptor_Opc == 1){
    
      lampada_A = !lampada_A;
    
    }
    if (interruptor_Opc == 2){
    
      lampada_A = !lampada_A;
      lampada_B = !lampada_B;
    
    }
  }
  // cout << "Estado da lâmpada A: " << lampada_A << endl;
  // cout <<  "Estado da lâmpada B: " << lampada_B << endl;
  
  if(lampada_A == 1){

    cout << endl << "A lampada A está acesa!";

  } else {

  cout << endl << "A lampada A está apagada!";

  }

  if(lampada_B == 1){

    cout << endl << "A lampada B está acesa!";

  } else {

  cout << endl << "A lampada B está apagada!";

  }

 
 
  cout << endl << endl;
  return 0;
}