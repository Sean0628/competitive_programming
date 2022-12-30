#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

bool f(int x, vector<int> a) {
  unordered_set<int> s;
  s.insert(0);
  for (int na : a) {
    unordered_set<int> p;
    swap(p, s);
    for (int nx : p) {
      s.insert(nx-na);
      s.insert(nx+na);
    }
  }

  return s.count(x);
}

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  x -= a[0];
  vector<int> xa, ya;
  for (int i = 1; i < n; ++i) {
    if (i % 2 == 1) ya.push_back(a[i]);
    else xa.push_back(a[i]);
  }

  string ans = "No";
  if (f(x, xa) && f(y, ya)) ans = "Yes";

  cout << ans << endl;
  return 0;
}
