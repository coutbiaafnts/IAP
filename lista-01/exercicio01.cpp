#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int first, second;
  float soma, sub, mult, div, rest;

  cout << "Informe o primeiro número: ";
  cin >> first;

  cout << "Informe o segundo número: ";
  cin >> second;

  soma = first + second;
  sub = first - second;
  mult = first * second;
  div = first / second;
  rest = first % second;

  cout << "Soma entre os números: ";
  cout << soma << endl;

  cout << "Subtração entre os números: ";
  cout << sub << endl;
  
  cout << "Multiplicação entre os números: ";
  cout << mult << endl;

  cout << "Divisão entre os números: ";
  cout << div << endl;
 
 
  cout << endl << endl;
  return 0;
}