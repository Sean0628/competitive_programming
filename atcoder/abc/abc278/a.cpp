#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, k) {
    a.emplace_back(0);
  }

  for (int i = k; i < a.size(); ++i) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
