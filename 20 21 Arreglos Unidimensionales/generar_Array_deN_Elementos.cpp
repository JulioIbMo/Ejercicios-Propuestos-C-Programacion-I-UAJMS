#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int num[n]={};
    srand(time(NULL));
    
    for (int i = 0; i < n; i++)
    {
        num[i] = 0 + (rand()%10);
    }

    //Codigo Aqui


    //Codigo Aqui
    
     for (int i = 0; i < n; i++)
    {
        cout<<num[i];
    }




    cout<<endl;

}