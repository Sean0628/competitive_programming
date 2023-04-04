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
  string s; cin >> s;
  int n = s.size();

  for (int i = 1; i < n; i++) {
    int mid = (n-i) / 2;
    string t = s.substr(0, mid);
    string u = s.substr(mid, mid);

    if (t == u) {
      out(n-1-i);
      return 0;
    }
  }
  return 0;
}
