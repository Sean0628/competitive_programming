#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  reverse(s.begin(), s.end());

  rep(i, n) cout << s[i] << endl;
  return 0;
}
