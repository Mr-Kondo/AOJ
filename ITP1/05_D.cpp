#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

bool CHECK_NUM(int x){
  if(x%3 == 0){
    cout << " " << x;
    return true;
  }
  return false;
}

bool INCLUDE3(int x){
  int X = x;
  while(X){
    if(X%10 == 3){
      cout << " " << x;
      return false;
    }
  X /= 10;
  }
  return true;
}

bool END_CHECK_NUM(int i, int n){
  if( i <= n ) return true;
  return false;
}

int main()
{
  int N;
  cin >> N;
  
  int i = 1;
  while(END_CHECK_NUM(i,N)){
    if(!CHECK_NUM(i)) INCLUDE3(i);
    i++;
  }
  
  return 0;
}

