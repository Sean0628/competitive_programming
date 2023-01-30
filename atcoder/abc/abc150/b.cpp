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
  int n; string s; cin >> n >> s;

  int cnt = 0;
  rep(i, n) {
    if (s[i] != 'A') continue;

    if (i+2 < n && s[i+1] == 'B' && s[i+2] == 'C') {
      cnt++;
      i += 2;
    }
  }
  cout << cnt << endl;
  return 0;
}
