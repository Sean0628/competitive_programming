#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  vector<ll> a(n*2);
  ll tot = 0;
  rep(i, n) {
    cin >> a[i];
    a[i+n] = a[i];
    tot += a[i];

    if (i == n-1 && tot % 10 != 0) { cout << "No" << endl; return 0; }
    if (tot % 10 == 0) tot /= 10;
  }

  a[n] = a[0];

  bool ok = false;
  ll sum = 0;
  rep(i, n+1) {
    sum += a[i];
    if (sum == tot) { ok = true; break; }
    else if (sum > tot) sum = 0;
  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
