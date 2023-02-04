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

ll gcd(ll a, ll b) {
  if (b == 0) return a;

  return gcd(b, a%b);
}

int main() {
  ll a, b; cin >> a >> b;
  ll lcm = a*b/gcd(a, b);

  cout << lcm << endl;
  return 0;
}
