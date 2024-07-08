#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;

  string estudiantes[n];
  
  for(int i=0;i < n;i++){
    cin>>estudiantes[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout<< estudiantes[i]<<" ";
  }
  
  cout<<endl;

  return 0;
}