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
  string s; cin >> s;

  int cnt = 0;

  rep(i, 1000) {
    vector<int> c = { i/100, (i/10)%10, i%10 };
    int f = 0;
    rep(j, n) {
      if (s[j] == '0' + c[f]) f++;
      if (f == 3) break;
    }
    if (f == 3) cnt++;
  }

  out(cnt);
  return 0;
}
