#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "YES" : "NO") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  set<int> st;
  rep(i, n) {
    cin >> a[i];
    st.insert(a[i]);
  }

  cyn(st.size() == n);
  return 0;
}