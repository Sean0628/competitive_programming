#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int len = 0;
  vector<int> l(n+1, INF);

  // LIS
  for (int i = 1; i <= n; i++) {
    int pos = lower_bound(l.begin()+1, l.end(), a[i-1]) - l.begin();

    l[pos] = a[i-1];

    if (pos > len) len = pos;
  }

  out(len);

  return 0;
}
