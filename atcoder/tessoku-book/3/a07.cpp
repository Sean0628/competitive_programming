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

int main() {
  int d, n; cin >> d >> n;
  vector<int> sum(d+1, 0);
  rep(i, n) {
    int l, r; cin >> l >> r;

    sum[l]++;
    sum[r+1]--;
  }

  rep(i, d+1) sum[i+1] += sum[i];

  for (int i = 1; i <= d; i++) out(sum[i]);

  return 0;
}
