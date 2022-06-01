#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll calc(string s, ll k) {
  ll ans = 0;
  for (char x:s) {
    ans *= k;
    ans += x - '0';
  }

  return ans;
}

int main() {
  ll k; cin >> k;
  string a, b; cin >> a >> b;

  ll A = calc(a, k);
  ll B = calc(b, k);

  cout << A * B << endl;
  return 0;
}
