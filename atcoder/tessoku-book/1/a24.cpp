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

  int len = 0;
  vector<int> l(n+1, 0);
  vector<int> dp(n+1);

  for (int i = 1; i <= n; ++i) {
    int pos = lower_bound(l.begin()+1, l.begin() + len + 1, a[i-1]) - l.begin();
        dp[i] = pos;

        l[dp[i]] = a[i-1];
        if (dp[i] > len) len++;
  }

  cout << len << endl;
  return 0;
}
