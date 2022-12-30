#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<string> S(n);
  rep(i, n) cin >> S[i];

  int ans = 0;
  rep(s, 1<<n) {
    int now = 0;
    map<char, int> cnt;
    rep(i, n) {
      if (s>>i&1) {
        for (char c : S[i]) cnt[c]++;
      }
    }

    for (auto p : cnt) if (p.second == k) ++now;
    ans = max(ans, now);
  }

  cout << ans << endl;

  return 0;
}
