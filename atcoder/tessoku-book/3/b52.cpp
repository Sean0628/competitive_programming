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
  int n, x; cin >> n >> x;
  x--;
  string s; cin >> s;

  string t = s;

  queue<int> q;
  q.push(x);
  t[x] = '@';

  while (!q.empty()) {
    int pos = q.front(); q.pop();

    if (pos >= 1 && t[pos-1] == '.') {
      q.push(pos-1);
      t[pos-1] = '@';
    }

    if (pos <= n-1 && t[pos+1] == '.') {
      q.push(pos+1);
      t[pos+1] = '@';
    }
  }

  out(t);
  return 0;
}
