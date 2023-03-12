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
  int n, m; cin >> n >> m;

  dsu ds(n);
  set<int> st;
  rep(i, m) {
    int a, c; char b, d;
    cin >> a >> b >> c >> d;
    a--, c--;
    if (ds.leader(a) == ds.leader(c)) {
      st.insert(ds.leader(a));
    }

    ds.merge(a, c);
  }

  printf("%d %d\n", (int)st.size(), (int)ds.groups().size()-(int)st.size());

  return 0;
}
