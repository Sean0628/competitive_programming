#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<ll> a(n), b(n);
  vector<ll> u;
  rep(i, n) {
    cin >> a[i] >> b[i];
    u.emplace_back(b[i]);
    u.emplace_back(a[i] - b[i]);
  }

  sort(u.rbegin(), u.rend());

  ll tot = 0;
  rep(i, k) tot += u[i];

  cout << tot << endl;
  return 0;
}
