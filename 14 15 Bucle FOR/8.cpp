#include <iostream>
using namespace std;

int main(){
  float peso, acumulador=0;
  int nManzanas=0;
  for (int i = 0; acumulador <= 2 ; i++)
  {
    cin>>peso;
    acumulador=acumulador+peso;
    nManzanas++;
  }
   cout<<"BOLSA LLENA"<<endl;
   cout<<acumulador<<"kg"<<endl;
   cout<<nManzanas<<" manzanas"<<endl;

  return 0;
}