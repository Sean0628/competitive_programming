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

  auto base2 = [](int n) {
    string s;
    while (n) {
      s += to_string(n % 2);
      n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
  };

  string s = base2(n);

  while (s.size() < 10) s = "0" + s;

  out(s);

  return 0;
}
