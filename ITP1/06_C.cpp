#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  int N;
  cin >> N;
  
  int b, f, r, v;
  b = 0; f = 0; r = 0; v = 0;
  
  int Ans[4][3][10] = {0};
  rep(i,N){
    cin >> b >> f >> r >> v;
    Ans[b-1][f-1][r-1] += v;
  }
  
  rep(b, 4){
    rep(f, 3){
      rep(r, 10){
          cout << ' ' << Ans[b][f][r];
      }
      cout << '\n';
    }
      if (b != 3) { // 4棟目以外の後に区切り線
            cout << "####################" << '\n';
    }
  }
  return 0;
}
