#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  map<int, int> g;
  rep(i, m) {
    int a, b; cin >> a >> b;

    if (a < b) g[b]++;
    else g[a]++;
  }

  int cnt = 0;
  for (auto v : g) if (v.second == 1) cnt++;

  cout << cnt << endl;
  return 0;
}
