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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  deque<int> dq;

  rep(i, n) {
    if (i%2 == 0) {
      dq.push_back(a[i]);
    } else {
      dq.push_front(a[i]);
    }
  }


  if (n%2 == 1) {
    reverse(dq.begin(), dq.end());
  }

  for (auto x : dq) {
    cout << x << " ";
  }

  return 0;
}
