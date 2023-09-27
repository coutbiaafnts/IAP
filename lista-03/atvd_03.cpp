#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  const int tamanho_Vetor = 5;
  float vetor_A[tamanho_Vetor];
  float media;

  // Inserindo os valores no vetor_A
  for (int i = 0; i < tamanho_Vetor; i++) {
    cout << "Insira o " << i + 1 << "° valor: ";
    cin >> vetor_A[i];

    system("cls");
  }

  // Imprimindo todos os valores no vetor_A
  cout << "Valores inseridos: \t";
  for (int i = 0; i < tamanho_Vetor; i++) {
    cout << vetor_A[i] << " ";
  }

  // calculando e imprimindo a média
  media = (vetor_A[0] + vetor_A[1] + vetor_A[2] + vetor_A[3] + vetor_A[4]) / 5;
  cout << endl << endl << "A media entre os números inseridos é: " << setprecision(2) << fixed << media << endl;

  // Encontrando o maior valor dentro vetor e imprimindo
  int maior = vetor_A[0];
  for (int i = 0; i < tamanho_Vetor; i++) {
    if (vetor_A[i] > maior) {
      maior = vetor_A[i];
    }
  }
  cout << "O maior valor inserido foi: " << maior << endl;

  // Encontrando o menor valor dentro vetor e imprimindo
  int menor = vetor_A[0];
  for (int i = 0; i < tamanho_Vetor; i++) {
    if (vetor_A[i] < menor) {
      menor = vetor_A[i];
    }
  }
  cout << "O menor valor inserido foi: " << menor;

 
  cout << endl << endl;
  return 0;
}