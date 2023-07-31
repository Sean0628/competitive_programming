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
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  vector<P> events;
  rep(i, n) events.push_back(P(a[i], 0));
  rep(i, m) events.push_back(P(b[i]+1, 1));
  sort(events.begin(), events.end());

  int seller = 0, buyer = m;

  for (auto [price, type] : events) {
    if (type == 0) seller++; else buyer--;
    if (seller >= buyer) {
      out(price);
      return 0;
    }
  }

  return 0;
}
