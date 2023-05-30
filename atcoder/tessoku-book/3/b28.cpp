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

vector<mint> memo;
ll fibonacci(ll n) {
  memo.resize(n);

  rep(i, n) {
    if (i == 0 || i == 1) memo[i] = 1;
    else memo[i] = memo[i-1] + memo[i-2];
  }

  return memo[n-1].val();
}

int main() {
  int n; cin >> n;
  out(fibonacci(n));
  return 0;
}

