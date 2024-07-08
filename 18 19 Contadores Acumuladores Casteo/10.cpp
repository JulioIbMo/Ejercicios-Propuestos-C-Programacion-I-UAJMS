#include <iostream>
using namespace std;

int main()
{
  int n, altura = 0, base = 0;
  cin >> n;
  altura = n;
  base = 2 * n;

  for (int i = 0; i < altura; i++)
  {
    if (i == 0 || i == (altura - 1))
    {
      for (int i = 0; i < base; i++)
      {
        cout << '*';
      }
    }else if (i>0 && i < (altura - 1))
    {
      for (int i = 0; i < base; i++)
      {
        if(i==0){
          cout<<'*';
        }else {
          cout << ' ';
        }
      }
    }
    cout << '*' << endl;
  }

  return 0;
}