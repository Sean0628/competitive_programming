#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  map<int, int> cnt;
  vector<int> a(n);


  ll tot = 0;;
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
    tot += a[i];
  }

  int q; cin >> q;
  vector<int> b(q), c(q);
  rep(i, q) cin >> b[i] >> c[i];

  rep(i, q) {
    tot += cnt[b[i]] * (c[i] - b[i]);
    cnt[c[i]] += cnt[b[i]];
    cnt[b[i]] = 0;

    cout << tot << endl;
  }

  return 0;
}
