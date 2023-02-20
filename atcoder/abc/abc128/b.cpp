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
  vector<tuple<string, int, int>> vec;
  for (int i = 1; i <= n; ++i) {
    string s; int p; cin >> s >> p;
    p = -p;
    vec.emplace_back(s, p, i);
  }

  sort(vec.begin(), vec.end());
  rep(i, n) out(get<2>(vec[i]));
  return 0;
}
