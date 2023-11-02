#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int T = 0;
  int par[5];
  int impar[5];
  int h1[15];
  int h2[15];
  int m = 0; int n =0;
  for (int j = 0; j < 15; j = j + 1)
  { 
    cin >> T;

    if(T%2==0)
    {
      h1[m] = T;
      m = m +1;
    }
    else
    {
      h2[n] = T;
      n = n + 1;
    }
  }
  for (int i = 0; i < 5; i = i + 1 )
  {
    if(m-i<=0){break;}
    cout <<"par["<< i <<"] = "<<h1[i]<<endl;
    
  }
  for (int i = 0; i < 5; i = i + 1 )
  {
    if(n-i<=0){break;}
    cout <<"impar["<< i <<"] = "<<h2[i]<<endl;
    
  }
  for (int i = 0; i < n-5; i = i + 1 )
  {
    cout <<"impar["<< i <<"] = "<<h2[i+5]<<endl;
  }
  for (int i = 0; i < m-5; i = i + 1 )
  {
    cout <<"par["<< i <<"] = "<<h1[i+5]<<endl;
  }

  return 0;
}