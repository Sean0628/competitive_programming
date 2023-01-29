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
  string s, t; cin >> s >> t;
  map<string, int> mp;
  int a, b; cin >> a >> b;
  mp[s] = a, mp[t] = b;

  string u; cin >> u;
  mp[u]--;

  printf("%i %i", mp[s], mp[t]);
  return 0;
}
