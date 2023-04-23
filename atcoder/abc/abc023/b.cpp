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
  string s; cin >> s;
  string t = "b";

  int cnt = 0;
  while (t.size() < s.size()) {
    t = 'a' + t + 'c';
    cnt++;
    if (s == t) break;

    t = 'c' + t + 'a';
    cnt++;
    if (s == t) break;

    t = 'b' + t + 'b';
    cnt++;
    if (s == t) break;
  }

  if (s != t) {
    out(-1);
  } else {
    out(cnt);
  }
  return 0;
}

