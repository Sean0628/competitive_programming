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

ll f(const vector<pair<ll, ll>>& L, int level, ll x) {
  if (level == 0) return 1;

  if (x < 1) return 0;
  x--;

  if (x < L[level-1].first) return f(L, level - 1, x);
  x -= L[level-1].first;

  if (x < 1) return L[level-1].second + 1;
  x--;

  if (x < L[level-1].first) return L[level-1].second + 1 + f(L, level - 1, x);
  x -= L[level-1].first;

  return L[level-1].second * 2 + 1;
}

int main() {
  int n; ll x; cin >> n >> x;
  x--;
  vector<pair<ll, ll>> L(n+1);

  L[0] = make_pair(1, 1);
  for (int i = 1; i <= n; ++i) {
    ll tot = L[i-1].first*2+3;
    ll patty = L[i-1].second*2+1;
    L[i] = make_pair(tot, patty);
  }

  out(f(L, n, x));

  return 0;
}
