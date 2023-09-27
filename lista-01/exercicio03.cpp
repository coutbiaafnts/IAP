#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int num_Mes;

  cout << "Digite o número do mês desejado: ";
  cin >> num_Mes;

  switch (num_Mes) {
    case 1:
        cout << "Janeiro";
        break;
    case 2:
        cout << "Fevereiro";
        break;
    case 3:
        cout << "Março";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Maio";
        break;
    case 6:
        cout << "Junho";
        break;
     case 7:
        cout << "Julho";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Setembro";
        break;
    case 10:
        cout << "Outubro";
        break;
    case 11:
        cout << "Novembro";
        break;
    case 12:
        cout << "Dezembro";
        break;
    default: cout << "Não existe um mês referente ao número " << num_Mes << ". Favor verificar!";
  }
 
 
  cout << endl << endl;
  return 0;
}