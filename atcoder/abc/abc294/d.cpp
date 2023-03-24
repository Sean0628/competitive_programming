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
  int n, q; cin >> n >> q;
  queue<int> que;
  map<int, bool> mp;

  int idx = 1;
  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      que.push(idx);
      idx++;
    } else if (c == 2) {
      int x; cin >> x;
      mp[x] = true;
    } else {
      int pos = que.front();
      while (!que.empty() && mp[pos]) {
        que.pop();
        pos = que.front();
      }

      out(pos);
    }
  }
  return 0;
}
