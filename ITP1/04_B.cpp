#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  long double r;
  cin >> r;
  
  long double pi = M_PI;
  long double area = r*r*pi;
  long double circumference = 2*r*pi;
  
  cout << fixed << setprecision(6) << area << ' ' << circumference << '\n';
  
  return 0;
}
