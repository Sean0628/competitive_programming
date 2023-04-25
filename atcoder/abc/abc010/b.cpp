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
  set<int> st = {2, 4, 5, 6, 8};

  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int cnt = 0;
  rep(i, n) {
    while (st.count(a[i])) {
      a[i]--;
      cnt++;
    }
  }

  out(cnt);

  return 0;
}
