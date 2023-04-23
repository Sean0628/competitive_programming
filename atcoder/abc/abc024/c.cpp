#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, d, k; cin >> n >> d >> k;
  vector<int> l(d), r(d);
  rep(i, d) cin >> l[i] >> r[i];

  vector<int> s(k), t(k);
  rep(i, k) cin >> s[i] >> t[i];

  rep(i, k) {
    int ans = 0;
    int now = s[i];
    if (s[i] < t[i]) {
      rep(j, d) {
        if (l[j] <= now && now <= r[j]) {
          now = r[j];
          ans = j+1;
        }
        if (now >= t[i]) break;
      }
    } else {
      rep(j, d) {
        if (l[j] <= now && now <= r[j]) {
          now = l[j];
          ans = j+1;
        }
        if (now <= t[i]) break;
      }
    }

    out(ans);

  }
  return 0;
}
