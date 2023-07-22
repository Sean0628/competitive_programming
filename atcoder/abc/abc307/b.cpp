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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  auto solve = [](string s, string t) {
    string tmp = s + t;
    string tmp2 = tmp;
    reverse(tmp2.begin(), tmp2.end());

    return tmp == tmp2;
  };

  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      if (solve(s[i], s[j])) {
        out("Yes");
        return 0;
      }
    }
  }

  out("No");
  return 0;
}
