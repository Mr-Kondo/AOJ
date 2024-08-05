#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

constexpr ll INF = 1<<30;

int main()
{
    int n;
    cin >> n;
    vector<bool> S(14);
    vector<bool> H(14);
    vector<bool> C(14);
    vector<bool> D(14);

    char c;
    int tmp;
    rep(i,n){
        cin >> c >> tmp;
        if(c == 'S') S.at(tmp) = true;
        else if(c == 'H') H.at(tmp) = true;
        else if(c == 'C') C.at(tmp) = true;
        else if(c == 'D') D.at(tmp) = true;
    }
    for(int i = 1; i <= 13; i++){
        if(!S.at(i)) cout << "S " << i << endl;
    }
    for(int i = 1; i <= 13; i++){
        if(!H.at(i)) cout << "H " << i << endl;
    }
    for(int i = 1; i <= 13; i++){
        if(!C.at(i)) cout << "C " << i << endl;
    }
    for(int i = 1; i <= 13; i++){
        if(!D.at(i)) cout << "D " << i << endl;
    }    
    return 0;
}
