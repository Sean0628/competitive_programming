#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  vector<set<int>> vec(n);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;

    vec[a[i]].insert(b[i]);
    vec[b[i]].insert(a[i]);
  }

  rep(i, n) {
    cout << vec[i].size() << " ";

    for (auto j : vec[i]) {
      cout << j+1 << " ";
    }
    cout << endl;
  }
  return 0;
}
