#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int a, b;

  cout << "Digite um número: ";
  cin >> a;
  cout << "Digite um segundo número: ";
  cin >> b;

  if (a % b == 0) {
    cout << "Os valores inseridos são múltiplos entre si!";
  } else {
    cout << "Os valores inseridos não são múltiplos entre si!";
  }
 
 
  cout << endl << endl;
  return 0;
}