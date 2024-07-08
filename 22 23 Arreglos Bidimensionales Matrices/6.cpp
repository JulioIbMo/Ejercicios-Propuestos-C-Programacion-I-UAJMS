#include <iostream>
using namespace std;

int main (){
  //GENERAR MATRIZ n*n DE DODS DIGITOS RANDOM
    int n;
    cin>>n;

    int matriz[n][n];
    srand(time(NULL));
    
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
      matriz[i][j] = 10 + (rand()%89);
      }
    }


     for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
      cout<<matriz[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;

    //Codigo Aqui
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        matriz[j][n-i-1]=matriz[i][j];
      }
    }
    
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
      cout<<matriz[i][j]<<" ";
      
      }
      cout<<endl;
    }


    //Codigo Aqui
    


    cout<<endl;

}