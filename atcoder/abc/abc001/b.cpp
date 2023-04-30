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
  int m; cin >> m;
  if (m < 100) out("00");
  else if (m <= 5000) {
    if (m < 1000) printf("0%d\n", m/100);
    else out(m/100);
  } else if (m <= 30000) out(m/1000 + 50);
  else if (m <= 70000) out((m/1000 - 30)/5 + 80);
  else out(89);
  return 0;
}
