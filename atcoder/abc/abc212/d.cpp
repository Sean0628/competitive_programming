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
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  ll k = 0;

  rep(i, q) {
    int c; cin >> c;

    if (c == 1) {
      ll x; cin >> x;
      pq.push(x - k);
    } else if (c == 2) {
      ll x; cin >> x;
      k += x;
    } else {
      out(pq.top()+k);
      pq.pop();

      if (pq.empty()) k = 0;
    }
  }
  return 0;
}
