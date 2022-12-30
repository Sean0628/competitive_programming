#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> w(n);
  rep(i, n) cin >> w[i];
  map<int, vector<int>> mp;
  rep(i,n) mp[w[i]].push_back(i);
  int now = 0;
  rep(i, n) if (s[i] == '1') now++;
  int ans = now;
  for (auto p : mp) {
    for (int i : p.second) {
      if (s[i] == '1') now--;
      else now++;
    }

    ans = max(ans, now);
  }

  cout << ans << endl;

  return 0;
}
