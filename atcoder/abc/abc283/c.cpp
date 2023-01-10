#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  ll cnt = 0;
  vector<pair<char, ll>> vec;
  rep(i, s.size()) {
    cnt++;
    if (i == s.size()-1 || s[i] != s[i+1]) {
      vec.emplace_back(make_pair(s[i], cnt));
      cnt = 0;
    }
  }

  reverse(vec.begin(), vec.end());

  ll ans = 0;
  for (auto e : vec) {
    if (e.first == '0') {
      ans += e.second/2;
      ans += e.second%2;
    } else ans += e.second;
  }

  cout << ans << endl;

  return 0;
}
