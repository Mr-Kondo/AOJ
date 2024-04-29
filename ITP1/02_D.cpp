#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  if(x-r >= 0 && x+r <= W && y-r >=0 && y+r <= H) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
