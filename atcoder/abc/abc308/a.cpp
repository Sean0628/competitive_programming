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
  int n = 8;
  vector<int> s(n);
  rep(i, n) cin >> s[i];

  vector<int> t(s);
  sort(t.begin(), t.end());

  auto check = [&]() {
    if (s != t) return false;

    rep(i, n) {
      if (100 > s[i]) return false;
      if (s[i] > 675) return false;
      if (s[i] % 25 != 0) return false;
    }

    return true;
  };

  cyn(check());
  return 0;
}
