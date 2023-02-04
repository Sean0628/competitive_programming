#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;
  string r = s;
  reverse(r.begin(), r.end());

  int cnt = 0;
  rep(i, s.size()/2) {
    if (s[i] != r[i]) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
