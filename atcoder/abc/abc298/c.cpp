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
  int n; cin >> n;
  int q; cin >> q;

  map<int, set<int>> b;
  map<int, multiset<int>> m;

  rep(r, q) {
    int t, i, j;
    cin >> t;

    if (t == 1) {
      cin >> i >> j;
      b[i].insert(j);
      m[j].insert(i);
    } else if (t == 2) {
      cin >> i;
      for (auto k : m[i]) {
        cout << k << " ";
      }
      cout << endl;
    } else if (t == 3) {
      cin >> i;
      for (auto k : b[i]) {
        cout << k << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
