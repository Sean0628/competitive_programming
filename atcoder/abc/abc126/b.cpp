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

int f(string s) {
  int idx = 0;
  int res = 0;
  while (idx < 2) {
    res *= 10;
    res += s[idx] - '0';
    idx++;
  }
  return res;
}

bool isM(int a) {
  return (0 < a && a <= 12);
}

int main() {
  string s; cin >> s;

  int a = f(s.substr(0, 2));
  int b = f(s.substr(2, 2));

  string ans;
  if (isM(a) && isM(b)) ans = "AMBIGUOUS";
  else if (isM(a)) ans = "MMYY";
  else if (isM(b)) ans = "YYMM";
  else ans = "NA";
  out(ans);
  return 0;
}
