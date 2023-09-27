#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  const int tamanho_Vetor = 10;
  int vetor_A[tamanho_Vetor];
  int valor, contador = 0; // contador: conta quantos valores válidos foram inseridos
  bool valor_Repetido = false;

  // Enquanto o número de valores váidos inseridos não atingir o tamanho do vetor, ele continua rodando
  while (contador < tamanho_Vetor) {

    // Pede ao usuário que insira um valor
    cout << "Insira o " << contador + 1 << "° valor: ";
    cin >> valor;

    // Verifica se o valor inserido já existe no vetor até o contador atual
    for (int i = 0; i < contador; i++) {

        // Se o valor inserido for igual a algum valor que já está no vetor, valor_Repetido passa a ser verdadeiro
        if (vetor_A[i] == valor) {
            valor_Repetido = true;
            break;
        }
    }

    // Se o valor for repetido, apresenta uma mensagem de que é repetido e valor_Repetido passa a ser falso, para que possa inserir um novo valor
    if (valor_Repetido) {
        cout << "Este valor já foi inserido, tente novamente" << endl;
        valor_Repetido = false;
    }
    // Se o valor não for repetido, agrega o valor ao vetor na posição atual do contador e soma mais um no contador para que passe para a próxima posição
    else {
        vetor_A[contador] = valor;
        contador ++;
    }
  }

  // Imprimindo todos os valores armazenados no vetor_A
  cout << "Valores do vetor_A: ";
  for (int i = 0; i < tamanho_Vetor; i++) {
    cout << vetor_A[i] << " ";
  }
 
 
  cout << endl << endl;
  return 0;
}