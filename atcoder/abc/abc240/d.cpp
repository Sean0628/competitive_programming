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
  stack<P> st;
  int cnt = 0;
  rep(i, n) {
    int a; cin >> a;

    cnt++;
    if (!st.empty() && st.top().first == a) {
      st.top().second++;
    } else {
      st.push(make_pair(a, 1));
    }

    if (st.top().second == a) {
      cnt -= st.top().second;
      st.pop();
    }

    out(cnt);
  }
  return 0;
}

