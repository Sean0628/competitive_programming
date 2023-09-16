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
  string ans = "";

  vector<int> div;
  for (int i = 1; i <= 9; i++) {
    if (n%i == 0) div.push_back(i);
  }


  rep(i, n+1) {
    if (i == 0) {
      ans += to_string(div[0]);
      continue;
    }
    rep(j, div.size()) {
      if (i%(n/div[j]) == 0) {
        ans += to_string(div[j]);
        break;
      }

      if (j == div.size()-1) {
        ans += "-";
        break;
      }
    }
  }

  out(ans);

  return 0;
}
