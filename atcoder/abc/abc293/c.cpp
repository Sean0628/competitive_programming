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
  int h, w; cin >> h >> w;
  vector a(h, vector<int> (w));
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }

  int n = (h-1)+(w-1);

  int ans = 0;
  rep(i, 1<<n) {
    set<int> st;
    int iidx = 0, jidx = 0;
    st.insert(a[iidx][jidx]);
    vector<P> v;
    v.emplace_back(iidx, jidx);

    rep(j, n) {
      if (i>>j&1) {
        //right
        jidx++;
      } else {
        //left
        iidx++;
      }
      if (jidx >= w) break;
      if (iidx >= h) break;
      v.emplace_back(iidx, jidx);
      st.insert(a[iidx][jidx]);
    }

    if (iidx == h-1 && jidx == w-1) {
      if (st.size() == n+1) ans++;
    }
  }

  out(ans);
  return 0;
}
