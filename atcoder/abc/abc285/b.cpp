#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;
  string s; cin >> s;

  for (int i = 1; i < n; ++i) {
    int l = 0;
    rep(j, n) {
      if (j+i < n && s[j] != s[j+i]) l = j+1;
      else break;
    }

    cout << l << endl;
  }
  return 0;
}
