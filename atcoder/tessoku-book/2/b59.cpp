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
        dat[pos] = dat[pos*2] + dat[pos*2+1];
      }
    }

    int query(int l, int r, int a, int b, int u) {
      if (r <= a || b <= l) return 0;
      if (l <= a && b <= r) return dat[u];

      int m = (a + b) / 2;
      int ansl = query(l, r, a, m, u*2);
      int ansr = query(l, r, m, b, u*2+1);

      return ansl + ansr;
    }
};

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  SegmentTree st;
  st.init(n);

  ll ans = 0;
  rep(i, n) {
    ans += st.query(a[i]+1, n+1, 1, st.siz+1, 1);
    st.update(a[i], 1);
  }

  cout << ans << endl;
  return 0;
}
