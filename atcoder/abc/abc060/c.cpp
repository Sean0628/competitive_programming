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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, t; cin >> n >> t;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int curr = 0;
  ll tot = 0;
  rep(i, n) {
    int begin = a[i];
    int end = begin + t;
    if (curr > begin) {
      end = begin + t;
      begin = curr;
    }

    tot += end-begin;
    curr = end;
  }

  out(tot);

  return 0;
}
