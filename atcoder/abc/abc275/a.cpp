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
  int n; cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int ans = 0, idx = 0;
  rep(i, n) {
    if (h[i] > ans) {
      ans = h[i];
      idx = i;
    }
  }

  cout << idx+1 << endl;
  return 0;
}
