#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int n, m;
  cin >> n >> m;
  int A[100][100] = {0};
  int b[100] = {0};
  int Ans[100] = {0};
  rep(i,n){
    rep(j,m){
      cin >> A[i][j];
    }
  }
  rep(i, m) cin >> b[i];
  
  rep(i,n){
    rep(j,m){
      Ans[i] += A[i][j]*b[j];
    }
    cout << Ans[i] << '\n';
  }
  return 0;
}
