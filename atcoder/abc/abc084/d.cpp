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

vector<bool> eratosthenes(int n) {
  vector<bool> isPrime(n+1, true);
  isPrime[0] = isPrime[1] = false;

  for (int p = 2; p <= n; ++p) {
    for (int q = p*2; q <= n; q += p) {
      isPrime[q] = false;

    }
  }

  return isPrime;
}

int main() {
  int t = 1e5;
  int q; cin >> q;

  vector<bool> isPrime(eratosthenes(t));

  vector<int> sum(t+1);
  rep(i, t+1) {
    if (isPrime[i] && isPrime[(i+1)/2]) sum[i]++;
  }

  for (int i = 1; i <= t; ++i) sum[i] += sum[i-1];

  rep(i, q) {
    int l, r; cin >> l >> r;

    printf("%d\n", sum[r]-sum[l-1]);
  }
  return 0;
}
