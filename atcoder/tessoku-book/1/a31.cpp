#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;

  ll a = (n/3);
  ll b = (n/5);
  ll c = (n/15);

  cout << a + b - c << endl;

  return 0;
}
