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
  int n, m; cin >> n >> m;

  vector<ll> cnt(n);
  vector<int> p(m);
  vector<string> s(m);;
  set<int> st;
  rep(i, m) {
    cin >> p[i] >> s[i];
    p[i]--;

    if (!st.count(p[i]) && s[i] == "WA") cnt[p[i]]++;
    if (s[i] == "AC") st.insert(p[i]);
  }

  ll tot = 0;
  rep(i, n) if (st.count(i)) tot += cnt[i];

  printf("%d %lld\n", (int)st.size(), tot);
  return 0;
}
