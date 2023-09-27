#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);


  int n, a1, r;

  // Usuário insere os dados
  cout << "Quantos termos serão calculados na PA? ";
  cin >> n;

  cout << endl << "Qual o valor do primeiro termo? ";
  cin >> a1;

  cout << endl << "Qual será a razão? ";
  cin >> r;

  // Último termo e soma
  int an = a1 + (n - 1) * r; // último termo
  int soma = ((a1 + an) * n) / 2; // soma dos termos

  // Validando a quantidade de termos, não tem como a quantidade de termos ser negativa!
  if (n > 0 ) {
    
    // Como ai = primeiro termo da PA que foi inserido pelo usuário, ele será o início.
    // O número de termos pedido pelo usuário deve ser respeitado, então limitamos nele (i <= an)
    // i += r, o próximo termo = soma da constante (r) com o valor do termo anterior (i) ** (+=) armazena o resultado na variável à esquerda**
    for (int i = a1; i <= an; i += r){ 

      Sleep(50);
      cout << i << " ";

    }

    cout << endl << "\nA soma dos termos da PA é: " << soma << endl;

  } else {

    cout << "Quantidade de termos é inválida!";

  }


  cout << endl << endl;
  return 0;
}