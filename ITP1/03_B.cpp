#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  vector<int> x;
  int i;
  while(cin >> i){
    if(i != 0) x.push_back(i);
  }
  
  rep(i, x.size()) cout << "Case " << i+1 << ": " << x[i] << '\n';
  
  return 0;
}
