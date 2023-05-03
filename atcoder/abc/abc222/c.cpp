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
  int n, m; cin >> n >> m;
  vector<string> a(2*n);
  rep(i, 2*n) cin >> a[i];
  vector<P> rank(2*n);
  rep(i, 2*n) rank[i] = {0, i};

  auto judge = [](char x, char y) {
    // x: p1, y: p2
    // return: (0: p1 win), (1: p2 win), (-1: draw)
    if (x == y) return -1;
    if (x == 'G' && y == 'C') return 0;
    if (x == 'C' && y == 'P') return 0;
    if (x == 'P' && y == 'G') return 0;
    return 1;
  };

  rep(j, m) {
    rep(i, n) {
      int p1_idx = rank[2*i].second;
      int p2_idx = rank[2*i+1].second;

      int res = judge(a[p1_idx][j], a[p2_idx][j]);
      if (res != -1) rank[2*i+res].first--;
    }
    sort(rank.begin(), rank.end());
  }

  rep(i, 2*n) out(rank[i].second+1);

  return 0;
}
