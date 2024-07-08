#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int cont1=0, cont2=0, cont3=0;
  string palabra;


  for (int i = 0; i < n; i++)
  {
    cin>>palabra;

    if (palabra.length() == 1){
      ++cont1;
    }else if (palabra.length() == 2){
      ++cont2;
    }else if (palabra.length() == 1){
      ++cont3;
    } 
  }
    cout << "Una letra: " << cont1 << endl;
    cout << "Dos letras: " << cont2 << endl;
    cout << "Tres letras: " << cont3 << endl;

  return 0;
}