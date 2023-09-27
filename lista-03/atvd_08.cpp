#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int ordem;
  cout << "Insira o ordem do Triângulo de Pascal: ";
  cin >> ordem;


  int triangulo[ordem];

  for (int i = 0; i < ordem; i++) {
    triangulo[i] = 0;
  }
  for (int i = 0; i < ordem; i++) {

    for (int j = i; j >= 0; j--) {

         if (j == 0 || j == i) {

            triangulo[j] = 1;
            cout << triangulo[j] << " ";

         } else {

            triangulo[j] = triangulo[j] + triangulo[j-1];
            cout << triangulo[j] << " ";
            
         }
    }
    cout << endl << endl;
  }
      
 
  cout << endl << endl;
  return 0;
}