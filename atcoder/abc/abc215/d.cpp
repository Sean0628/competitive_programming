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
  int n, m; cin >> n >> m;
  vector<int> a(n);
  set<int> st;

  auto factorize = [](int n, set<int> &st) {
    int rem = n;

    for (int i = 2; i*i <= n; ++i) {
      if (rem%i != 0) continue;

      while (rem%i == 0) {
        st.insert(i);
        rem /= i;
      }
    }
    if (rem != 1) st.insert(rem);
  };

  rep(i, n) {
    cin >> a[i];
    factorize(a[i], st);
  }

  vector<int> ans;

  for (int i = 1; i <= m; ++i) {
    set<int> st2;
    factorize(i, st2);

    bool ok = true;

    for (auto x : st2) if (st.count(x)) {
      ok = false;
      break;
    }

    if (ok) ans.push_back(i);
  }

  out(ans.size());
  for (auto x : ans) out(x);
  return 0;
}
