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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  vector<bool> seen(n);

  int idx = 0;
  int cnt = 0;
  while (true) {
    if (seen[idx]) {
      out(-1);
      return 0;
    }

    if (idx == 1) {
      out(cnt);
      return 0;
    }

    seen[idx] = true;
    idx = a[idx];
    cnt++;
  }


  return 0;
}
