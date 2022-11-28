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
  map<int, ll> cnt;
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  ll tot = 0;
  for (auto e : cnt) {
    ll n = e.second;
    tot += n * (n-1) * (n-2) / 6LL;
  }

  cout << tot << endl;

  return 0;
}
