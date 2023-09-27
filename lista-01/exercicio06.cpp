#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int segundos, horas, minutos, s;
  cin >> segundos;

  horas = (segundos / 3600);
  minutos = (segundos % 3600) / 60;
  s = (segundos % 3600) % 60;

  cout << "Horas: " << horas << endl;
  cout << "Minutos: " << minutos << endl;
  cout << "Segundos:" << s << endl;


  cout << endl << endl;
  return 0;
}