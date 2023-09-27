#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int num;

  cout << "Digite um número: ";
  cin >> num;

  if (num > 0 && num % 2 == 0){

    cout << "O número: " << num << " é  um número par e positivo";

  } else if (num > 0 && num % 2 != 0) {

    cout << "O número: " << num << " é um número ímpar e positivo";

  } else if (num < 0 && num % 2 == 0) {

    cout << "O número: " << num << " é um número par e negativo";

  } else {

    cout << "O número: " << num << " é um número ímpar e negativo";

  }
 
 
  cout << endl << endl;
  return 0;
}