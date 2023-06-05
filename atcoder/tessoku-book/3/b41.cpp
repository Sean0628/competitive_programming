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
  int x, y; cin >> x >> y;

  vector<P> ans;
  auto f = [&](int x , int y) {

    while (x > 1 || y > 1) {
      ans.push_back({x, y});

      if (x > y) x -= y;
      else y -= x;
    }
  };

  f(x, y);

  out(ans.size());
  reverse(ans.begin(), ans.end());
  for (auto p : ans) cout << p.first << " " << p.second << endl;

  return 0;
}
