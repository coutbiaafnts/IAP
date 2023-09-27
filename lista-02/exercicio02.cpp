#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int num_Fornecido, num_Fatorial = 1;

  // Inserção dos dados necessários
  cout << "Você precisa do fatorial de qual número? ";
  cin >> num_Fornecido;

  //  Se o número fornecido para calcular o fatorial for maior que zero ele executa
  if (num_Fornecido > 0) {

        for (int i = 1; i <= num_Fornecido; ++i) {
    
        // Cálculo do número fatorial aproveitando i, já i vai ser o valor de cada termo.
        num_Fatorial = num_Fatorial * i;

    }

    cout << endl << num_Fornecido << "! = " << num_Fatorial;

  } else {

    cout << "O número fornecido não é válido!";
    
  }

  
 
  cout << endl << endl;
  return 0;
}