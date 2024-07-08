#include <iostream>
using namespace std;

int main(){
  srand(time(NULL));
  int v[30]={};

  for (int i = 0; i < 30; i++)
  {
    v[i] = rand()%10;
  }

  for (int i = 0; i < 30; i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;

  bool digitos[10]={};
  for (int i = 0; i < 30; i++)
  {
    digitos[v[i]]=1;
  }
  bool todos=true;
  for (int i = 0; i < 30; i++)
  {
    if(digitos[i]==0)
      todos=false;
  }
    
  if(todos){
    cout<<"SI"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}