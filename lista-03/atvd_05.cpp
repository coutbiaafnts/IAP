#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  const int tamanho_Vetor =  10;
  int vetor_A[tamanho_Vetor];

  // Lendo os valores do vetor_A
  for (int i = 0; i < tamanho_Vetor; i++) {
    cout << "Insira o " << i + 1 << "° valor: ";
    cin >> vetor_A[i];
    system("cls");
  }

  // Imprimindo os valores do vetor_A
  cout << "Estes foram os valores inseridos: ";
  for (int i = 0; i < tamanho_Vetor; i++) {
    cout << vetor_A[i] << " ";
  }

  // Imprimindo os valores iguais inseridos no vetor_A
  cout << endl << endl << "Valores iguais: ";
  for (int i = 0; i < tamanho_Vetor; i++) {
    if (vetor_A[i] == vetor_A[i+1]) {
        cout << vetor_A[i] << " ";
    }
  }
 
 
  cout << endl << endl;
  return 0;
}