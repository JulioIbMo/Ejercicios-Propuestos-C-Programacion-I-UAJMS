#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;


// Crea e imprime array de n elementos
    int num[n]={};
    srand(time(NULL));
    
    for (int i = 0; i < n; i++)
    {
        num[i] = 0 + (rand()%10);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;

// Crea e imprime array auxiliar de 10 elementos en cero
    int contador[10]={};
    
    for (int i = 0; i < 10; i++)
    {
        cout<<contador[i]<<" ";
    }
    cout<<endl;

//Recorrer el vector *num* e incrementar el contador auxiliar donde cada posicion = a digito 
    for (int i = 0; i < n; i++)
    {
        /* code */
        contador[num[i]]++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<contador[i]<<" ";
    }
    cout<<endl;

// Recorrer el vector auxiliar y encontrar el mayor

    int mayor1;
    mayor1=contador[0];

    for (int i = 1; i < 10; i++)
    {
        if(contador[i]>mayor1){
            mayor1=contador[i];  
        }
    }
    cout<<mayor1<<endl;

   
    
}