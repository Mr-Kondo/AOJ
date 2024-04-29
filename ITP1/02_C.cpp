#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int N = 3;
  vector<int> I(N);
  rep(i,N) cin >> I[i];
  
  sort(I.begin(), I.end());
  rep(i,N){
    if(i<N-1)cout << I[i] <<" ";
    else cout << I[i] << '\n';
  }
  return 0;
}
