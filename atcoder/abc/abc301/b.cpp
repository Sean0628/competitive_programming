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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> ans;

  ans.push_back(a[0]);
  for (int i = 1; i < n; i++) {
    int d = a[i] - a[i-1];

    if (d > 0) {
      while (d > 0) {
        ans.push_back(++a[i-1]);
        d--;
      }
    } else {
      while (d < 0) {
        ans.push_back(--a[i-1]);
        d++;
      }
    }
  }

  for (auto x : ans) cout << x << " ";
  return 0;
}
