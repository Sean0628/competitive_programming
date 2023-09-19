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

  auto getDivisor = [](int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        res.push_back(i);
        if (i * i != n) res.push_back(n / i);
      }
    }
    return res;
  };

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (i%2 == 0) continue;

    vector<int> div = getDivisor(i);
    if (div.size() == 8) cnt++;
  }

  out(cnt);
  return 0;
}

