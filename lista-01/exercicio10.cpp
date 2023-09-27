#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float nota_01, nota_02, nota_03, media;
  
  cout << "Digite a sua nota do primeiro período: ";
  cin >> nota_01;

  cout << "\nDigite a sua nota do segundo período: ";
  cin >> nota_02;

  cout << "\nDigite a sua nota do terceiro período: ";
  cin >> nota_03;

  media = (nota_01 + nota_02 + nota_03) / 3;

  if (media >= 6) {

    cout << "\nVocê foi aprovado!";

  } else if (media >= 4 && media < 6) {
    
    cout  << "Fique atento, você está de recuperação...";
    
  } else {

    cout << "\nInfelizmete você foi reprovado!";
    
  }

 
 
  cout << endl << endl;
  return 0;
}