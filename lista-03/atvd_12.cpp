
#include <iostream>

using namespace std;


int main()
{   bool A= false, B= false, C=false, D=false;
    char op;
    int somad1, somad2;
    int Trasposta[3][3];
  int Matri[3][3]={{9,2,4},
                   {2,1,0},
                   {5,7,3} };
    
    cout << "MENU DE OPÇÕES: " << endl << "a)Imprima a matriz." << endl;
cout << "b)Calcule a soma dos elementos que estão na diagonal principal" << endl;
 cout << "c)Calcule a soma dos elementos que estão na diagonal secundaria. " << endl;
cout << "d)Calcule e imprima a sua transposta." << endl;      
cout <<"Utilize Letras MAIUSCULAS " << endl;
cin >> op;

switch(op){
        
        case 'A' :
        system("clear");
       cout << "a)Imprima a matriz." << endl;
       A =true;
       break;
       
       case 'B' : 
       system("clear");
      cout << "b)Calcule a soma dos elementos que estão na diagonal principal" << endl;
      B = true;
      break;
      
      case 'C':
      system("clear");
      cout << "c)Calcule a soma dos elementos que estão na diagonal secundaria. " << endl;
      C=true;
      break;
      
      case 'D' :
      system("clear");
      cout << "d)Calcule e imprima a sua transposta." << endl;
      D=true;
      break;
       
       default: cout << "Opção invalida!";

}
if(A==true){
    
for(int i=0; i < 3; i++){
    for(int j=0;j<3;j++){
        cout << Matri[i][j] << "\t";
        
}
cout << endl;
}
}
else if(B==true){
    somad1= Matri[0][0] + Matri[1][1] + Matri[2][2];
    cout << "A soma dos elementos da diagona principal é: " << somad1 << endl;
}
else if (C==true){
    somad2= Matri[0][2] + Matri[1][1] + Matri[2][0];
    cout << "A soma dos elementos da diagona secundaria é: " << somad2 << endl;
}
else if(D==true){
    for(int i=0; i < 3; i++){
    for(int j=0;j<3;j++){
        Trasposta[i][j] = Matri[j][i];
        cout << Trasposta[i][j] << "\t";
    }
    cout << endl;
    }
}
    return 0;
}


