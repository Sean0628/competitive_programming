#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), cnt(n);
  rep(i, m) {
    cin >> a[i];
    a[i]--;
    cnt[a[i]]++;
  }

  rep(i, n) {
    int ans = m - cnt[i];
    cout << ans << endl;
  }

  return 0;
}
