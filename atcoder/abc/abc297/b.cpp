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

bool solve(string s) {
  vector<int> b(2);
  vector<int> r;
  int k = 0;

  rep(i, s.size()) {
    if (s[i] == 'B') b[i%2]++;

    if (s[i] == 'R') {
      r.push_back(i);
    }

    if (s[i] == 'K') k = i;
  }

  return (r[0] < k && k < r[1] && b[0] == 1 && b[1] == 1);
};

int main() {
  string s; cin >> s;
  cyn(solve(s));
  return 0;
}
