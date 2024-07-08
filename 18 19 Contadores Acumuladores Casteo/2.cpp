#include <iostream>
using namespace std;
int main(){
  int n, exitos=0;
  double prob=0;
  cin>>n;
  for(int i=0; i<n;i++){
    if(rand()%2==0)
      exitos++;
      prob=(double)exitos/n;
      cout<<prob<<endl;
  }
}