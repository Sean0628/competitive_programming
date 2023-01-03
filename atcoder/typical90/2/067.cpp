#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll base_to_long(string n) {
  ll ans = 0, x = 1;

  for (int i = n.size()-1; i >= 0; --i) {
    ans += 1LL * (n[i]-'0')*x;
    x *= 8;
  }

  return ans;
}

string long_to_base9(ll n) {
  if (n == 0) return "0";

  string ans;
  while (n > 0) {
    char c = ((n%9) + '0');

    if (c == '8') c = '5';

    ans = c + ans;
    n /= 9;
  }

  return ans;
}

int main() {
  string n; cin >> n;
  int k; cin >> k;

  rep(i, k) n = long_to_base9(base_to_long(n));

  cout << n << endl;

  return 0;
}
