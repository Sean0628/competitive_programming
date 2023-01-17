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
  vector<int> a(n);
  int sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  cout << sum << endl;
  return 0;
}
