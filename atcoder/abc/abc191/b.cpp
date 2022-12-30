#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> res;
  rep(i, n) {
    if (a[i] == x) continue;

    res.push_back(a[i]);
  }

  rep(i, res.size()) {
    cout << res[i];
    cout << ((i+1 == res.size()) ? "\n" : " ");
  }

  return 0;
}
