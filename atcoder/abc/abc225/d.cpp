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
  int n, q; cin >> n >> q;

  int empty = -1;
  vector<int> front(n, empty), back(n, empty);

  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      int x, y; cin >> x >> y;
      x--; y--;
      back[x] = y;
      front[y] = x;
    } else if (c == 2) {
      int x, y; cin >> x >> y;
      x--; y--;
      back[x] = empty;
      front[y] = empty;
    } else {
      int x; cin >> x;
      x--;

      while (front[x] != empty) x = front[x];
      vector<int> ans;
      while (x != empty) {
        ans.push_back(x+1);
        x = back[x];
      }
      cout << ans.size() << " ";
      for (auto x : ans) cout << x << (x == ans.back() ? "\n" : " ");
    }
  }

  return 0;
}
