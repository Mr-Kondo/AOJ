#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
    unsigned int A, B;
    cin  >> A >> B;
    cout << A/B << ' ' << A%B << ' ' << fixed << setprecision(5) << (double)A/B << '\n'; 
    
    return 0;
}
