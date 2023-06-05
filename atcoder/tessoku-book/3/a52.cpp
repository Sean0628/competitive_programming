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
  int q; cin >> q;

  queue<string> que;
  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      string s; cin >> s;
      que.push(s);
    } else if (c == 2) {
      out(que.front());
    } else {
      que.pop();
    }
  }
  return 0;
}
