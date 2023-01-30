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
  char a, b; cin >> a >> b;
  string as, bs;
  vector<string> s;
  rep(i, b-'0') as += a;
  rep(i, a-'0') bs += b;

  s.emplace_back(as);
  s.emplace_back(bs);
  sort(s.begin(), s.end());

  cout << s[0] << endl;
  return 0;
}
