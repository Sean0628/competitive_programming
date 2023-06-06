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

  rep(i, n) {
    int x; cin >> x;
    a[i] = P(x, i);
  }

  stack<P> st;

  rep(i, n) {
    while (!st.empty() && st.top().first < a[i].first) {
      st.pop();
    }

    if (st.empty()) {
      out(-1);
    } else {
      out(st.top().second + 1);
    }

    st.push(a[i]);
  }

  return 0;
}
