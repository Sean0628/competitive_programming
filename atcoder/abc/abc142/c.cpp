#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<P> a(n);

  rep(i, n) {
    int m; cin >> m;
    a[i] = make_pair(m, i+1);
  }

  sort(a.begin(), a.end());

  rep(i, n) {
    cout << a[i].second << " ";
  }
  return 0;
}
