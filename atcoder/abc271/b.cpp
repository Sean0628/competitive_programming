#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<vector<int>> a;
  rep(i, n) {
    int l; cin >> l;
    vector<int> tmp(l);
    rep(j, l) cin >> tmp[j];

    a.emplace_back(tmp);
  }
  vector<int> s(q), t(q);
  rep(i, q) cin >> s[i] >> t[i];

  rep(i,q) {
    cout << a[s[i]-1][t[i]-1] << endl;
  }
  return 0;
}

