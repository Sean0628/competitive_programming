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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int h, w, n; cin >> h >> w >> n;
  vector<int> a(n), b(n);
  vector<int> ac(n), bc(n);
  rep(i, n) {
    cin >> a[i] >> b[i];
    ac[i] = a[i];
    bc[i] = b[i];
  }

  sort(a.begin(), a.end());
  a.erase(unique(a.begin(), a.end()), a.end());

  sort(b.begin(), b.end());
  b.erase(unique(b.begin(), b.end()), b.end());

  map<int, int> mh, mw;
  rep(i, a.size()) mh[a[i]] = i+1;
  rep(i, b.size()) mw[b[i]] = i+1;

  rep(i, n) {
    cout << mh[ac[i]] << " " << mw[bc[i]] << endl;
  }

  return 0;
}
