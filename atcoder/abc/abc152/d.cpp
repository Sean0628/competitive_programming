#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

P f(int x) {
  int a = x%10;
  int b = 0;

  while (x) {
    b = x;
    x /= 10;
  }
  return P(a, b);
}

int main() {
  int n; cin >> n;
  map<P, int> freq;

  for (int i = 1; i <= n; ++i) {
    P p = f(i);
    freq[p]++;
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    P p = f(i);
    P q(p.second, p.first);
    ans += freq[q];
  }

  cout << ans << endl;

  return 0;
}
