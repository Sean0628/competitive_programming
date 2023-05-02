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
  vector<P> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;

  set<P> st;
  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;

      ll x = a[i].first-a[j].first;
      ll y = a[i].second-a[j].second;
      ll g = gcd(abs(x), abs(y));
      st.insert(P(x/g, y/g));
    }
  }

  out(st.size());
  return 0;
}
