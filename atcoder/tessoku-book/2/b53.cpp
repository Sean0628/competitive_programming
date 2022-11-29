#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d; cin >> n >> d;
  vector<int> x(n), y(n);
  map<int, vector<int>> mp;
  priority_queue<int, vector<int>, less<int>> que;
  rep(i, n) {
    cin >> x[i] >> y[i];
    x[i]--;
    mp[x[i]].emplace_back(y[i]);
  }

  int ans = 0;
  rep(i, d) {
    for (auto e : mp[i]) que.push(e);

    if (!que.empty()) {
      ans += que.top();
      que.pop();
    }
  }

  cout << ans << endl;
  return 0;
}
