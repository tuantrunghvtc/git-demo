#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int N = 0;
  int T = 0;
  cin >> N;
  int arr[N];
  for (int i = 0 ; i< N ; i++)
  {
    cin >> T;
    arr[i] = T;
  }
  int V = arr[1];
  int P = 0;
  for ( int j = 0; j < N; j++)
  {
    if (V > arr[j])
    {
      V = arr[j];
      P = j;
    }

  }
    cout <<"Menor valor: "<< V << endl;
    cout <<"Posicao: "<< P << endl;
  
  return 0;
}