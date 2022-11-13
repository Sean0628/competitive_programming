#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  map<int, int> mp;
  ll tot = 0;

  rep(i, n) {
    tot += mp[a[i]];
    mp[a[i]]++;
  }

  cout << tot << endl;
  return 0;
}
