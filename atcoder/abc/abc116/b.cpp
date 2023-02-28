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

int f(int a) {
  int res;
  if (a%2 == 0) res = a/2;
  else res = 3*a+1;

  return res;
}

int main() {
  int s; cin >> s;

  set<int> st;
  int idx = 1;
  int n = s;
  while (true) {
    st.insert(n);
    n = f(n);
    idx++;

    if (st.count(n)) break;
  }

  out(idx);

  return 0;
}
