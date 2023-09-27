#include <iostream>
#include <windows.h>
#include <math.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  // b = cateto oposto
  // c = cateto adjacente
  float hipotenusa, b, c;

  cout << "Qual é o valor do cateto oposto? ";
  cin >> b;

  cout << endl << "Qual é o valor do cateto adjacente? ";
  cin >> c;

  if (b > 0 && c > 0) {
    int b2 = b * b;
    int c2 = c * c;

    hipotenusa = sqrt(b2 + c2); // sqrt é o calculo da raiz quadrada! E precisa da ( #iclude <math.h> )

    cout << endl << "O cáluculo realizado foi:  hipotenusa =  raiz de " << b << " ao quadrado + " << c << " ao quadrado" << endl;
    cout << "Que resultou em: " << hipotenusa;
  } else { 
    
    cout << endl << "Valores dos catetos são inválidos, favor verificar!";

  }
 
  cout << endl << endl;
  return 0;
}