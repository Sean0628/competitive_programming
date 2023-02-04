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


vector<int> prime_numbers(int n) {
  vector<int> res;
  vector<bool> isPrime(n+1, true);
  isPrime[0] = isPrime[1] = false;

  for (int p = 2; p <= n; ++p) {
    if (!isPrime[p]) continue;
    res.emplace_back(p);

    for (int q = p*2; q <= n; q += p) {
      isPrime[q] = false;
    }
  }

  return res;
};

int main() {
  int x; cin >> x;
  vector<int> p = prime_numbers(1e6);

  int pos = lower_bound(p.begin(), p.end(), x) - p.begin();
  cout << p[pos] << endl;
  return 0;
}
