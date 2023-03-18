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
  int a, b, k; cin >> a >> b >> k;

  set<int> st;
  for (int i = 0; i < k; ++i) {
    if (b < a+i) continue;

    st.insert(a+i);
  }
  for (int i = 0; i < k; ++i) {
    if (a > b-i) continue;

    st.insert(b-i);
  }

  for (int n : st) out(n);
  return 0;
}
