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
  int n, m; cin >> n >> m;

  auto f = [](int x) {
    int a = 1;
    for (int i = x; i > x-2; --i) a *= i;
    return a/2;
  };

  cout << f(n) + f(m) << endl;
  return 0;
}
