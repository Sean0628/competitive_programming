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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  int t = 0, cnt = 0;;
  rep(i, n) {
    if (a[i] == t) {
      t++;
    } else {
      cnt++;
    }
  }

  if (t == 0) cnt = -1;
  cout << cnt << endl;

  return 0;
}
