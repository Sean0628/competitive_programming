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
  vector<int> a;

  while (n) {
    a.push_back(n%10);
    n /= 10;
  }

  sort(a.begin(), a.end());

  int mx = 0;
  do {

    rep(p, a.size()) {
      int x = 0, y = 0;
      rep(i, a.size()) {
        if (i <= p) {
          x = x*10+a[i];
        }
        else {
          y = y*10+a[i];
        }
      }

      chmax(mx, x*y);
    }

  } while (next_permutation(a.begin(), a.end()));

  out(mx);
  return 0;
}
