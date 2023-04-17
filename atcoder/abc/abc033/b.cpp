#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, string>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<P> s(n);
  int tot = 0;

  rep(i, n) {
    cin >> s[i].second >> s[i].first;
    tot += s[i].first;
  }

  sort(s.begin(), s.end(), greater<P>());

  if (tot-s[0].first < s[0].first) {
    out(s[0].second);
  } else {
    out("atcoder");
  }

  return 0;
}
