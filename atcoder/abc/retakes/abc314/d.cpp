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

const ll INF = 1e9;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;
  vector<int> t(q), a(q);
  vector<char> b(q);
  int l = -1;
  rep(i, q) {
    cin >> t[i] >> a[i] >> b[i];
    if (t[i] != 1) l = i;
  }

  rep(i, q) {
    if (t[i] == 1) s[a[i]-1] = b[i];
    if (i == l) {
      if (t[i] == 2) rep(j, n) s[j] = tolower(s[j]);
      else rep(j, n) s[j] = toupper(s[j]);
    }
  }

  out(s);
  return 0;
}
