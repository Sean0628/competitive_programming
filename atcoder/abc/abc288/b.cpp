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
  int n; cin >> n;
  int k; cin >> k;
  vector<string> s(n);
  rep(i, n) {
    cin >> s[i];
  }
  vector<string> b(k);

  rep(i, k) b[i] = s[i];
  sort(b.begin(), b.end());

  rep(i, k) cout << b[i] << endl;
  return 0;
}
