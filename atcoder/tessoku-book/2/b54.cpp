#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  map<int, int> cnt;
  int n; cin >> n;
  vector<int> a(n);
  ll ans = 0;
  rep(i, n) {
    cin >> a[i];
    ans += cnt[a[i]];
    cnt[a[i]]++;
  }

  cout << ans << endl;
  return 0;
}
