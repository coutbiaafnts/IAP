#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int matriz[3][3];

    cout << "Digite os valores da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor da posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int somaColunas[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somaColunas[j] += matriz[i][j];
        }
    }

    cout << "Array de soma das colunas: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << somaColunas[i] << " ";
    }
    cout << "\n";

    cout << endl
         << endl;
    return 0;
}