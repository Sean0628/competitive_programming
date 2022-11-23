#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  vector<int> x(q);
  rep(i, q) cin >> x[i];

  auto isPrime = [](int a) {
    for (int i = 2; i*i <= a; ++i) {
      if (a%i == 0) return false;
    }

    return true;
  };

  rep(i, q) {
    string ans = "No";
    if (isPrime(x[i])) ans = "Yes";
    cout << ans << endl;
  }

  return 0;
}
