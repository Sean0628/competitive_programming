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
  int n, q; cin >> n >> q;
  string s; cin >> s;
  vector<int> a(q), b(q), c(q), d(q);
  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<int> t(n+1);
  rep(i, n) t[i] = (s[i] - 'a');

  vector<mint> power100(n+1);
  power100[0] = 1;
  rep(i, n) power100[i+1] = power100[i] * 100;

  vector<mint> hash(n+1);
  rep(i, n) hash[i+1] = (100 * hash[i] + t[i]);

  auto get_hash = [&](int l, int r) {
    return hash[r] - hash[l] * power100[r-l];
  };

  rep(i, q) {
    mint hash1 = get_hash(a[i]-1, b[i]);
    mint hash2 = get_hash(c[i]-1, d[i]);

    cyn(hash1 == hash2);
  }
  return 0;
}
