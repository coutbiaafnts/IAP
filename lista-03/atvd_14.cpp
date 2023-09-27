#include <iostream>
#include <windows.h>
#define linha 3
#define coluna 3
using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
int m[linha][coluna];
int soma[3];
cout<<"Preencha sua matriz: (9 numeros)"<<endl;
for(int i =0;i<3;i++){
for(int j =0;j<3;j++){
    cin>>m[i][j];
}
cout<<endl;
}
for(int i =0;i<3;i++){
    for(int j =0;j<3;j++){
        cout<<m[i][j]<<"\t";
    }
    cout<<endl;
}
for(int i =0;i<3;i++){

soma[0]=m[0][0]+m[1][0]+m[2][0];
soma[1]=m[0][1]+m[1][1]+m[2][1];
soma[2]=m[0][2]+m[1][2]+m[2][2];

cout<<soma[i]<<" ";
}
cout<<endl<<"Acima esta a soma das colunas da matriz. ";
    cout << endl
         << endl;
    return 0;
}