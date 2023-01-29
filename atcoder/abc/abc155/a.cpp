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

int main() {
  int a, b, c; cin >> a >> b >> c;
  map<int, int> cnt;
  cnt[a]++;
  cnt[b]++;
  cnt[c]++;

  bool one = false, two = false;
  for (auto e : cnt) {
    if (e.second == 2) two = true;
    if (e.second == 1) one = true;
  }

  cyn(one && two);

  return 0;
}
