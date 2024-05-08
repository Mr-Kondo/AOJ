#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  int N;
  cin >> N;
  vector<ll> a(N);
  rep(i,N) cin >> a[i];
  int min = *std::min_element(a.begin(), a.end());
  int max = *std::max_element(a.begin(), a.end());
  ll sum =  std::accumulate(a.begin(), a.end(), std::remove_reference<decltype(*std::begin(a))>::type{});
  
  cout << min << ' ' << max << ' ' << sum << '\n';
  
  return 0;
}
