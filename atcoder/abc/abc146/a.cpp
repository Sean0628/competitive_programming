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
  map<string, int> mp;
  mp["SUN"] = 7;
  mp["MON"] = 6;
  mp["TUE"] = 5;
  mp["WED"] = 4;
  mp["THU"] = 3;
  mp["FRI"] = 2;
  mp["SAT"] = 1;

  string s; cin >> s;
  cout << mp[s] << endl;
  return 0;
}
