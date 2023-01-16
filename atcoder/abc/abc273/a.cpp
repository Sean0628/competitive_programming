#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;

  auto f = [](auto f, int k) -> int {
    if (k == 0) return 1;

    return k*f(f, k-1);
  };

  cout << f(f, n) << endl;

  return 0;
}
