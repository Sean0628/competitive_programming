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
  rep(i, n) if (s[i] == '1') cnt++;

  string ans = "No";
  if (cnt % 2 == k % 2) ans = "Yes";
  cout << ans << endl;
  return 0;
}
