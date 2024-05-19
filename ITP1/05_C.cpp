#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
  while(cin){
    int H, W;
    cin >> H >> W;
    for(int i = 1; i <= H; i++){
      for(int j = 1; j <= W; j++){
        if((i+j)%2 == 0)  cout << '#';
        else              cout << '.';
      }
      cout << '\n';
    }
    cout << '\n';
  }
  return 0;
}
