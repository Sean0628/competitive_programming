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
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector<int> p(n);
  iota(p.begin(), p.end(), 0);

  auto f = [&](int i, int j) {
    int ai = a[i], aj = a[i] + b[i];
    int bi = a[j], bj = a[j] + b[j];

    return (ll) ai * bj > (ll) aj * bi;
  };

  stable_sort(p.begin(), p.end(), f);

  rep(i, n) cout << p[i]+1 << endl;

  return 0;
}
