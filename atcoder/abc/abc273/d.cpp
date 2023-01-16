#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int h, w, rs, cs; cin >> h >> w >> rs >> cs;
  int n; cin >> n;

  using MP = map<int, vector<int>>;
  MP mpL, mpR, mpU, mpD;

  rep(ni, n) {
    int i, j; cin >> i >> j;
    mpR[i].emplace_back(j);
    mpL[i].emplace_back(-j);
    mpD[j].emplace_back(i);
    mpU[j].emplace_back(-i);
  }

  auto init = [&](MP& mp, int r) {
    for (auto& p : mp) {
      sort(p.second.begin(), p.second.end());
      p.second.emplace_back(r);
    }
  };

  init(mpR, w+1);
  init(mpL, 0);
  init(mpD, h+1);
  init(mpU, 0);

  auto f = [&](MP& mp, int i, int j, int l, int r) {
    auto it = mp.find(i);
    if (it == mp.end()) return min(j+l, r-1);
    auto& is = it->second;
    int wj = *lower_bound(is.begin(), is.end(), j);

    return min(j+l, wj-1);
  };

  int q; cin >> q;
  rep(i, q) {
    char d; int l; cin >> d >> l;

    if (d == 'R') cs = f(mpR, rs, cs, l, w+1);
    if (d == 'L') cs = -f(mpL, rs, -cs, l, 0);
    if (d == 'D') rs = f(mpD, cs, rs, l, h+1);
    if (d == 'U') rs = -f(mpU, cs, -rs, l, 0);
    printf("%d %d\n", rs, cs);

  }
  return 0;
}
