#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int t, n; cin >> t >> n;
  vector<int> cnt(t+1);

  rep(i, n) {
    int l, r; cin >> l >> r;
    cnt[l]++; cnt[r]--;
  }
  vector<int> sum(t+1);
  for (int i = 1; i < t+1; ++i) {
    sum[i] = sum[i-1] + cnt[i-1];
  }

  for (int i = 1; i <= t; ++i) {
    cout << sum[i] << endl;
  }
  return 0;
}
