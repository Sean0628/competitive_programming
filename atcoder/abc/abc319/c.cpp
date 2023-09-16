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
  int n = 3;
  vector<int> c(n*n);
  rep(i, n*n) cin >> c[i];

  vector<int> p(n*n);
  iota(p.begin(), p.end(), 0);

  int cnt = 0, tot = 0;

  do {
    bool ok = true;

    auto check = [&](int i, int j, int k) {
      vector<P> d;
      d.emplace_back(p[i], c[i]);
      d.emplace_back(p[j], c[j]);
      d.emplace_back(p[k], c[k]);
      sort(d.begin(), d.end());

      if (d[0].second == d[1].second) ok = false;
    };

    // horizontal
    check(0, 1, 2);
    check(3, 4, 5);
    check(6, 7, 8);

    // vertical
    check(0, 3, 6);
    check(1, 4, 7);
    check(2, 5, 8);

    // diagonal
    check(0, 4, 8);
    check(2, 4, 6);

    if (ok) cnt++;
    tot++;
  } while (next_permutation(p.begin(), p.end()));

  double ans = (double)cnt / tot;

  printf("%.10f\n", ans);

  return 0;
}
