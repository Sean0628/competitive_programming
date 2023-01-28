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


string i_to_baseN(int i, int n) {
  if (i == 0) return "0";

  string res;
  while (i > 0) {
    res = char (i%n + '0') + res;
    i /= n;
  }

  return res;
}

int main() {
  int n, k; cin >> n >> k;
  int ans = i_to_baseN(n, k).size();
  cout << ans << endl;
  return 0;
}
