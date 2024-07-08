#include <iostream>
using namespace std;

int main(){
  int diasTrabajados;
  cin>> diasTrabajados;

  int horasPorDia;
  
  int acumuladorHoras=0;
  for (int i = 0; i < diasTrabajados; i++)
  {
    cin>> horasPorDia;
    acumuladorHoras = acumuladorHoras + horasPorDia;
  }
  
  cout<<acumuladorHoras*15<<endl;

  return 0;
}