#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<P> a(n);
  rep(i, n) {
    cin >> a[i].first;
    a[i].second = i;
  }

  sort(a.begin(), a.end());

  vector<P> b(n);
  b[0].first = 1; b[0].second = a[0].second;
  for (int i = 1; i < n; ++i) {
    if (a[i-1].first == a[i].first) b[i].first = b[i-1].first;
    else b[i].first = b[i-1].first +1;

    b[i].second = a[i].second;
  }

  auto f = [](const P &a, const P &b) {
    return a.second < b.second;
  };

  sort(b.begin(), b.end(), f);

  rep(i, n) cout << b[i].first << " ";
  cout << endl;

  return 0;
}
