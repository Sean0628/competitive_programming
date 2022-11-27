#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int streak1 = 1;
  vector<int> ret1(n);
  ret1[0] = 1;
  rep(i, n-1) {
    if (s[i] == 'A') streak1++;
    else streak1 = 1;

    ret1[i+1] = streak1;
  }

  int streak2 = 1;
  vector<int> ret2(n);
  ret2[n-1] = 1;
  for (int i = n - 2; i >= 0; --i) {
    if (s[i] == 'A') streak2 = 1;
    else streak2++;

    ret2[i] = streak2;
  }

  ll ans = 0;
  rep(i, n) ans += max(ret1[i], ret2[i]);
  cout << ans << endl;
  return 0;
}
