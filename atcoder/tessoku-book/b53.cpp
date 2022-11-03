#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d; cin >> n >> d;
  priority_queue<int> que;
  vector<vector<int>> x(d);

  rep(i, n) {
    int tx, ty; cin >> tx >> ty;
    x[tx-1].emplace_back(ty);
  }

  int tot = 0;
  rep(i, d) {
    for (auto j : x[i]) que.push(j);

    if (!que.empty()) {
      tot += que.top();
      que.pop();
    }
  }

  cout << tot << endl;

  return 0;
}
