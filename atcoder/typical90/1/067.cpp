#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll base8_to_long(string n) {
  ll res = 0;
  rep(i, n.size()) res = res*8+ int (n[i]-'0');

  return res;
}

string long_to_base9(ll n) {
  if (n == 0) return "0";

  string res;
  while (n > 0) {
    res = char(n%9 + '0') + res;
    n /= 9;
  }

  return res;
}

int main() {
  string n; int k; cin >> n >> k;

  rep(i, k) {
    n = long_to_base9(base8_to_long(n));
    rep(j, n.size()) if (n[j] == '8') n[j] = '5';
  }

  cout << n << endl;

  return 0;
}
