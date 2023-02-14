#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  rep(i, n) cin >> a[i+1];
  vector<int> b(n+1);
  for (int i = n; i >= 1; --i) {
    int sum = 0;
    for (int j = i+i; j <= n; j+= i) {
      sum ^= b[j];
    }
    b[i] = sum^a[i];
  }

  vector<int> ans;

  for (int i = 1; i <= n; ++i) {
    if (b[i]) ans.push_back(i);
  }
  out(ans.size());

  rep(i, ans.size()) cout << ans[i] << " ";

  return 0;
}
