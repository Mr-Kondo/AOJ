#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int a, b;
  char ch;
  while(ch != '?'){
    cin >> a >> ch >> b;
    if(ch == '+') cout << a+b << '\n';
    else if(ch == '-') cout << a-b << '\n';
    else if(ch == '*') cout << a*b << '\n';
    else if(ch == '/') cout << a/b << '\n';
  }
  return 0;
}
