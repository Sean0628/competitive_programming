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

const ll INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int l = 0, r = INF+1;

  while (r - l > 1) {
    int mid = (l + r) / 2;

    int sellers = 0, buyers = 0;
    rep(i, n) if (a[i] <= mid) sellers++;
    rep(i, m) if (b[i] >= mid) buyers++;

    if (sellers >= buyers) r = mid;
    else l = mid;
  }

  out(r);
  return 0;
}
