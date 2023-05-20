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
  int h, w, n; cin >> h >> w >> n;
  vector<vector<ll>> sum(h+1, vector<ll>(w+1, 0));

  rep(i, n) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a--; b--; c--; d--;

    sum[a][b]++;
    sum[a][d+1]--;
    sum[c+1][b]--;
    sum[c+1][d+1]++;
  }

  rep(i, h) {
    rep(j, w) {
      sum[i+1][j] += sum[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      sum[i][j+1] += sum[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) cout << sum[i][j] << " ";
    cout << endl;
  }
  return 0;
}
