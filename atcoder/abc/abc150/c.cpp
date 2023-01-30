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

int main() {
  int n; cin >> n;
  vector<int> a(n), p(n), q(n);

  rep(i, n) a[i] = i+1;
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];

  int idx = 0, pidx, qidx;
  do {
    idx++;
    if (a == p) pidx = idx;
    if (a == q) qidx = idx;
  } while (next_permutation(a.begin(), a.end()));

  cout << abs(pidx-qidx) << endl;
  return 0;
}
