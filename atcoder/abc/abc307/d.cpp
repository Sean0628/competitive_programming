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
  string s; cin >> s;

  string ans;
  int depth = 0;
  for (char c : s) {
    if (c == ')' && depth > 0) {
      while (ans.back() != '(') ans.pop_back();
      ans.pop_back();
      depth--;
    } else if (c == '(') {
      ans += c;
      depth++;
    } else {
      ans += c;
    }
  }

  out(ans);
  return 0;
}
