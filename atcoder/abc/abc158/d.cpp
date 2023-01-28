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
  string s; cin >> s;
  deque<char> dq;
  for (char c : s) dq.push_back(c);

  bool r = false;
  int q; cin >> q;
  rep(qi, q) {
    int t; cin >> t;
    if (t == 1) {
      r = !r;
    } else {
      int f; char c;
      cin >> f >> c;
      if (r) f = 3-f;
      if (f == 1) {
        dq.push_front(c);
      } else {
        dq.push_back(c);
      }
    }
  }

  if (r) reverse(dq.begin(), dq.end());
  string ans;
  for (char c : dq) ans += c;
  cout << ans << endl;
  return 0;
}
