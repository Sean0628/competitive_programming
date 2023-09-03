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
  vector<vector<int>> d(n+1, vector<int>(n+1));
  rep(i, n) {
    for (int j = i+1; j < n; j++) {
      cin >> d[i][j];
    }
  }

  if (n%2 == 1) n++;

  ll ans = 0;
  vector<bool> used(n);
  auto f = [&](auto f, ll w) -> void {
    ans = max(ans, w);
    int idx = 0;
    while (idx < n && used[idx]) idx++;
    if (idx == n) return;

    used[idx] = true;
    for (int j = idx+1; j < n; j++) {
      if (used[j]) continue;
      used[j] = true;
      f(f, w+d[idx][j]);
      used[j] = false;
    }
    used[idx] = false;
  };

  f(f, 0);

  out(ans);

  return 0;
}
