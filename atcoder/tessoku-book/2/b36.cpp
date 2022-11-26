#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int cnt = 0;
  rep(i, s.size()) if (s[i] == '1') cnt++;

  string ans = "No";
  if (k%2 == 0 & cnt%2 == 0) ans = "Yes";
  if (k%2 == 1 & cnt%2 == 1) ans = "Yes";

  cout << ans << endl;
  return 0;
}
