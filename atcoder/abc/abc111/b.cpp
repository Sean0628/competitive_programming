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


  int x = n;
  while (true) {
    int tmp = x;
    set<int> st;
    while (tmp > 0) {
      st.insert(tmp%10);
      tmp /= 10;
    }

    if (st.size() == 1) {
      out(x);
      return 0;
    }

    x++;
  }
  return 0;
}
