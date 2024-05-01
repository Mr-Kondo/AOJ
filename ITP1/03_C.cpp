#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  vector<pair<int,int>> I;
  int x, y;
  while(cin >> x >> y){
    if(x !=0 || y != 0){
      if(x >= y)
        I.push_back(make_pair(x,y));
      else I.push_back(make_pair(y,x));
    }else break;
  }
  //sort(I.begin(), I.end());
  
  rep(i,I.size()) cout << I[i].second << ' ' << I[i].first << endl;
  
  return 0;
}
