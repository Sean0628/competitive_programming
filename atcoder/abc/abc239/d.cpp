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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

set<int> st;

void erathosthenes(int n) {
  vector<bool> is_prime(n+1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; ++i) {
    if (is_prime[i]) {
      st.insert(i);
      for (int j = 2*i; j <= n; j += i) is_prime[j] = false;
    }
  }
  return;
}

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;

  erathosthenes(200);

  for (int i = a; i <= b; ++i) {
    bool t = true;
    for (int j = c; j <= d; ++j) {
      int k = i+j;

      if (st.count(k)) {
        t = false;
        break;
      }
    }

    if (t) {
      out("Takahashi");
      return 0;
    }
  }

  out("Aoki");
  return 0;
}
