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
  string s; cin >> s;

  int a = 0, z = s.size() - 1;
  int n = s.size();

  rep(i, n) {
    if (s[i] == 'A') {
      a = i;
      break;
    }
  }

  for (int i = n-1; i >= 0; i--) {
    if (s[i] == 'Z') {
      z = i;
      break;
    }
  }

  out(z-a+1);


  return 0;
}
