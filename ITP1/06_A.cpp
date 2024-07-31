#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    reverse(a.begin(), a.end());
    rep(i,n){
        if(i == n-1){cout << a.at(i) << '\n';}
        else{cout << a.at(i) << ' ';}
        }
    return 0;
}
