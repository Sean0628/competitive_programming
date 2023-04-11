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
  int n, k; cin >> n >> k;
  vector<int> a(k);
  rep(i, k) cin >> a[i];
  set<int> s;
  rep(i, k) s.insert(a[i]);

  for (int i = n;; ++i) {
    string tmp = to_string(i);
    bool ok = true;
    for (auto c : tmp) {
      if (s.count(c - '0')) {
        ok = false;
        break;
      }
    }

    if (ok) {
      out(i);
      break;
    }
  }

  return 0;
}
