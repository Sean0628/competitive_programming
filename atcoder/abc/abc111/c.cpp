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
  int n; cin >> n;
  vector<int> v(n), af, bf;
  map<int, int> a, b;

  rep(i, n) {
    cin >> v[i];
    if (i % 2 == 0) a[v[i]]++;
    else b[v[i]]++;
  }

  int ai, am = 0;
  for (auto p : a) {
    af.emplace_back(p.second);
    if (am < p.second) {
      am = p.second;
      ai = p.first;
    }
  }

  int bi, bm = 0;
  for (auto p : b) {
    bf.emplace_back(p.second);
    if (bm < p.second) {
      bm = p.second;
      bi = p.first;
    }
  }

  sort(af.rbegin(), af.rend());
  sort(bf.rbegin(), bf.rend());

  int ans = 0;

  if (ai == bi) {
    int mx = max(af[0]+bf[1], af[1]+bf[0]);
    ans = n - mx;
  } else ans = n-(am+bm);

  out(ans);
  return 0;
}
