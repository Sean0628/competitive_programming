#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

bool isPrime(int n) {
  for (int i = 2; i*i <= n; ++i) {
    if (n%i == 0) return false;
  }

  return true;
}

int main() {
  int q; cin >> q;
  vector<int> x(q);
  rep(i, q) cin >> x[i];

  rep(i, q) {
    string ans = isPrime(x[i]) ? "Yes" : "No";
    cout << ans << endl;
  }
  return 0;
}
