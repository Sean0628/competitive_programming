#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;
  vector<int> t(q), a(q), b(q);
  rep(i, q) cin >> t[i] >> a[i] >> b[i];

  string pre = s.substr(0, n);
  string post = s.substr(n);

  rep(i, q) {
    if (t[i] == 1) {
      a[i]--; b[i]--;

      if (b[i] < n) swap(pre[a[i]], pre[b[i]]);
      else if (n <= a[i]) swap(post[a[i]-n], post[b[i]-n]);
      else swap(pre[a[i]], post[b[i]-n]);
    } else swap(pre, post);
  }

  cout << pre << post << endl;

  return 0;
}
