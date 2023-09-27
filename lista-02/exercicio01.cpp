#include <iostream>
#include <windows.h>
#include <iomanip>

 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int num_Termos, proximo_Termo, soma = 2; // soma = 2 porque o termo 01 e 02 são 1, então 1+1 = 2

  // Dois primeiros termos da sequência
  int termo_01 = 1, termo_02 = 1;

  // Usuário insere a quantidade de termos
  cout << "Iforme a quantidade de termos da sequência de Fibonacci você deseja: ";
  cin >> num_Termos;

  if (num_Termos > 0) {

     // Determinando o fim da sequência quando a quantidade de termos fornecida for atingida
  for (int i = 0; i < num_Termos; ++i) {

      Sleep(50);
      cout << termo_01 << " ";

      // Cálculo do próximo termo da sequência
      proximo_Termo = termo_01 + termo_02;
      termo_01 = termo_02;
      termo_02 = proximo_Termo;

      // Somando os termos
      soma = soma + proximo_Termo;
  }

  cout << endl << "\nSoma dos termos apresentados: " << soma << ".";
  } else {

    cout << "\nO número de termos fornecido não é válido!";
  }

 
 
  cout << endl << endl;
  return 0;
}