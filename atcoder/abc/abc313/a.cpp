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
  vector<int> a(n); rep(i, n) cin >> a[i];
  multiset<int> st;
  rep(i, n) st.insert(a[i]);
  int mx = 0;
  rep(i, n) chmax(mx, a[i]);

  if (mx == a[0] && st.count(a[0]) == 1) out(0);
  else out(mx - a[0]+1);
  return 0;
}
