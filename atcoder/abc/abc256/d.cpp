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
  int n; cin >> n;
  vector<P> a;
  rep(i, n) {
    int x, y; cin >> x >> y;
    a.push_back(P(x, 0));
    a.push_back(P(y, 1));
  }

  sort(a.begin(), a.end());

  int cnt = 0;

  for (auto [t, f] : a) {
    if (f == 0) {
      if (cnt == 0) printf("%d ", t);
      cnt++;
    } else {
      cnt--;
      if (cnt == 0) printf("%d\n", t);
    }
  }

  return 0;
}
