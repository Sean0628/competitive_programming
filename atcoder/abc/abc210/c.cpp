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
  int n, k; cin >> n >> k;
  set<int> st;
  int mx = 0;
  vector<int> c(n);
  rep(i, n) cin >> c[i];

  map<int, int> mp;
  rep(i, k-1) {
    st.insert(c[i]);
    mp[c[i]]++;
  }

  for (int i = k-1; i < n; ++i) {
    mp[c[i]]++;
    st.insert(c[i]);

    chmax(mx, (int)st.size());

    mp[c[i-k+1]]--;
    if (mp[c[i-k+1]] == 0) st.erase(c[i-k+1]);
  }

  out(mx);
  return 0;
}
