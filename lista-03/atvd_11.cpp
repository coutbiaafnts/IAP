#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int matriz[4][4];
    int maior = matriz[0][0];
    int linha_maior = 0, coluna_maior = 0;

    // Le a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    // Imprime a matriz
    cout << "\nMatriz 4x4:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    // Posição do maior valor
    cout << "\nMaior valor: " << maior << "\n";
    cout << "Posicao do maior valor: [" << linha_maior << "][" << coluna_maior << "]";

    return 0;

    cout << endl
         << endl;
    return 0;
}
