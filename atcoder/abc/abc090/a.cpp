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
  vector<string> s;
  rep(i, 3) {
    string tmp; cin >> tmp;
    s.emplace_back(tmp);
  }

  printf("%c%c%c\n", s[0][0], s[1][1], s[2][2]);
  return 0;
}
