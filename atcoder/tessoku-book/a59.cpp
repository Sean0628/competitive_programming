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
  int n, q; cin >> n >> q;

  SegmentTree st;
  st.init(n);
  rep(i, q) {
    int c, pos, x, l, r;
    cin >> c;
    if (c == 1) {
      cin >> pos >> x;
      st.update(pos, x);
    } else {
      cin >> l >> r;
      int ans = st.query(l, r, 1, st.siz + 1, 1);

      cout << ans << endl;
    }
  }
  return 0;
}
