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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

int main() {
  int n; cin >> n;
  string s; cin >> s;

  deque<int> q = {n};
  for (int i = n-1; i >= 0; i--) {
    if (s[i] == 'L') q.push_back(i);
    else q.push_front(i);
  }

  for (int i = 0; i <= n; ++i) cout << q[i] << " ";
  return 0;
}
