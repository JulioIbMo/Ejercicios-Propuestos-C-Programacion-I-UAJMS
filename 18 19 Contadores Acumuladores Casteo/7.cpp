#include <iostream>
using namespace std;

int main(){
  int i,n, lado=0;
  cin>>n;
  for(i=n;i>=0;i--){
    lado=lado+i;
  }
  cout<<lado<<endl;
  return 0;
}