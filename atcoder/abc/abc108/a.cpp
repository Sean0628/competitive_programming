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
  int k; cin >> k;
  set<P> st;

  for (int i = 1; i <= k; ++i) {
    for (int j = i+1; j <= k; ++j) {
      if ((i+j)%2 == 1) st.insert(P(i, j));
    }
  }

  out(st.size());
  return 0;
}
