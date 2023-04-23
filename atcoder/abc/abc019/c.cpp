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

vector<P> prime_factorize(int n) {
  vector<P> res;
  for (int i = 2; i * i <= n; i++) {
    if (n % i != 0) continue;
    int ex = 0;
    while (n % i == 0) {
      ex++;
      n /= i;
    }
    if (i != 2) res.push_back({i, ex});
  }
  if (n != 1 && n != 2) res.push_back({n, 1});
  return res;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  set<vector<P>> st;

  rep(i, n) st.insert(prime_factorize(a[i]));

  out(st.size());
  return 0;
}
