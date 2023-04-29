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
  vector c(4, vector<char>(4));
  rep(i, 4) rep(j, 4) cin >> c[i][j];

  for (int i = 3; i >= 0; i--) {
    for (int j = 3; j >= 0; j--) {
      cout << c[i][j];
      if (j != 0) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
