#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

class SegmentTree {
  public:
    vector<int> dat;
    int siz = 1;

    void init(int n) {
      siz = 1;
      while (siz < n) siz *= 2;
      for (int i = 1; i < siz * 2; ++i) dat.emplace_back(0);
    }

    void update(int pos, int x) {
      pos = pos + siz - 1;
      dat[pos] = x;
      while (pos >= 2) {
        pos /= 2;
        dat[pos] = min(dat[pos*2], dat[pos*2+1]);
      }
    }

    int query(int l, int r, int a, int b, int u) {
      if (r <= a || b <= l) return 1'000'000'000;
      if (l <= a && b <= r) return dat[u];

      int m = (a + b) / 2;
      int ansl = query(l, r, a, m, u*2);
      int ansr = query(l, r, m, b, u*2+1);

      return min(ansl, ansr);
    }
};

int main() {
  int n, l, r; cin >> n >> l >> r;
  vector<int> x(n+1, 0);
  for (int i = 1; i <= n; ++i) cin >> x[i];

  SegmentTree st;

  st.init(n);
  vector<int> dp(n+1);
  dp[1] = 0;
  st.update(1, 0);

  for (int i = 2; i <= n; ++i) {
    int posl = lower_bound(x.begin(), x.end(), x[i] - r) - x.begin();
    int posr = lower_bound(x.begin(), x.end(), x[i] - l+1) - x.begin()-1;

    dp[i] = st.query(posl, posr+1, 1, st.siz+1, 1) + 1;
    st.update(i, dp[i]);
  }

  cout << dp[n] << endl;
  return 0;
}
