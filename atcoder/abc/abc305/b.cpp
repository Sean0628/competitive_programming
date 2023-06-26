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
  vector<int> a = { 3, 1, 4, 1, 5, 9 };

  vector<int> sum(a.size()+1);
  rep(i, a.size()) sum[i+1] = sum[i] + a[i];

  char p, q; cin >> p >> q;
  int p1 = p - 'A', q1 = q - 'A';
  int ans = abs(sum[q1] - sum[p1]);

  out(ans);

  return 0;
}
