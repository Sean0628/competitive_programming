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
  int n; cin >> n;
  string s; cin >> s;

  auto check = [&](int i) {
    bool ok = false;
    string t = to_string(i);
    if (t.size() == 1) t = "00" + t;
    else if (t.size() == 2) t = "0" + t;

    int curr = 0;
    rep(i, n) {
      if (curr == 3) { ok = true; break; }
      if (s[i] != t[curr]) continue;

      curr++;
    }

    if (curr == 3) ok = true;

    return ok;
  };

  int cnt = 0;
  rep(i, 1000) {
    if (check(i)) cnt++;
  }

  out(cnt);

  return 0;
}
