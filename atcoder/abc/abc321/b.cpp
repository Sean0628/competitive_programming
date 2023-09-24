#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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
  int n, x; cin >> n >> x;
  vector<int> a(n);
  rep(i, n-1) cin >> a[i];

  int ans = INF;
  for (int i = 100; i >= 0; --i) {
    vector<int> b = a;
    b[n-1] = i;
    sort(all(b));

    int tot = 0;
    for (int j = 1; j < n-1; ++j) {
      tot += b[j];
    }
    if (tot >= x) chmin(ans, i);
  }

  if (ans == INF) out(-1);
  else out(ans);

  return 0;
}
