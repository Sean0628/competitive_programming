#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> fh, fhc, sh, shc;
  rep(i, n/2) fh.emplace_back(a[i]);
  for (int i = n/2; i < n; ++i) sh.emplace_back(a[i]);

  rep(i, 1<<fh.size()) {
    ll sum = 0;
    rep(j, fh.size()) {
      if (i>>j&1) sum += fh[j];
    }

    fhc.emplace_back(sum);
  }
  rep(i, 1<<sh.size()) {
    ll sum = 0;
    rep(j, sh.size()) {
      if (i>>j&1) sum += sh[j];
    }

    shc.emplace_back(sum);
  }

  sort(shc.begin(), shc.end());

  bool ok = false;
  rep(i, fhc.size()) {
    int pos = lower_bound(shc.begin(), shc.end(), k-fhc[i]) - shc.begin();

    if (pos < shc.size() && shc[pos] == k-fhc[i]) ok = true;
  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
