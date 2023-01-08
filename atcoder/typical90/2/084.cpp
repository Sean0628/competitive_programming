#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  string s; cin >> s;

  ll cnt = 0;
  vector<pair<char, ll>> vec;
  rep(i, s.size()) {
    cnt++;
    if (i == s.size() - 1 || s[i] != s[i+1]) {
      vec.emplace_back(make_pair(s[i], cnt));
      cnt = 0;
    }
  }

  ll ret = 0;
  rep(i, vec.size()) ret += 1LL * vec[i].second * (vec[i].second + 1LL) / 2LL;

  cout << n * (n + 1) / 2LL - ret << endl;
  return 0;
}
