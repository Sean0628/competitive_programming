#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t = "atcoder"; cin >>s;

  int n = t.size();
  map<char, int> mp;
  rep(i, n) mp[t[i]] = i;

  vector<int> a(n);
  rep(i, n) a[i] = mp[s[i]];
  int ans = 0;
  rep(i, n) rep(j, i) if (a[j] > a[i]) ans++;

  cout << ans << endl;
  return 0;
}
