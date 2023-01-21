#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> a(n);

  rep(i, n) {
    if (s[i] == 'R') a[i] = 0;
    if (s[i] == 'G') a[i] = 1;
    if (s[i] == 'B') a[i] = 2;
  }

  vector<ll> cnt(3);
  rep(i, n) cnt[a[i]]++;
  ll ans = 1;
  rep(i, 3) ans *= cnt[i];

  rep(j, n) rep(i, j) {
    int k = j + (j-i);
    if (k < n) {
      if (a[i] == a[j]) continue;
      if (a[j] == a[k]) continue;
      if (a[i] == a[k]) continue;
      ans--;
    }
  }
  cout << ans << endl;
  return 0;
}
