#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int M = 1e9 + 7;

int main() {
  int n, p, q; cin >> n >> p >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int cnt = 0;
  rep(i, n) {
    rep(j, i) {
      rep(k, j) {
        rep(l, k) {
          rep(m, l) {
            if ((1LL*a[i]*a[j]%p*a[k]%p*a[l]%p*a[m]%p) == q) cnt++;
          }
        }
      }
    }
  }

  cout << cnt << endl;
  return 0;
}
