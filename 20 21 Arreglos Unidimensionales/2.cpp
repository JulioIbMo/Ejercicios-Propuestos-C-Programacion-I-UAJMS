#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;
  int notas[n]={};

  int mayorUno=0, mayorDos=0;
  for (int i = 0; i < n; i++)
  {
    cin>>notas[i];
    if(notas[i] > mayorUno){
      mayorDos = mayorUno;
      mayorUno = notas[i];
    }else if(notas[i] > mayorDos){
      mayorDos = notas[i];
    }
  }
  

  // for (int i = 0; i < n; i++)
  // {
  //   cout<<notas[i];
  // }

  cout<<mayorUno<<" "<<mayorDos<<endl;

  return 0;
}