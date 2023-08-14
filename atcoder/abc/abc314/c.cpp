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
  int n, m; cin >> n >> m;
  string s; cin >> s;
  vector<int> c(n);
  rep(i, n) {
    cin >> c[i];
    c[i]--;
  }

  vector<string> x(m, "");
  vector<int> y(n);

  rep(i, n) {
    x[c[i]] += s[i];
    y[i] = c[i];
  }

  rep(i, m) {
    x[i] = x[i].back() + x[i].substr(0, x[i].size()-1);
  }

  string ans = "";
  vector<int> z(m);
  rep(i, n) {
    ans += x[y[i]][z[y[i]]];
    z[y[i]]++;
  }

  out(ans);
  return 0;
}
