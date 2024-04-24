#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int S;
  cin >> S;
  
  int H, M;
  H = S/3600;
  M = (S%3600)/60;
  
  cout << H << ':' << M << ':' << S-3600*H-60*M <<'\n';
  return 0;
}
