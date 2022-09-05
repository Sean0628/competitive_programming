#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  string s;
  cin >> k >> s;

  string ans = "";

  int si = s.size();
  int idx = min(si, k);
  rep(i, idx) ans += s[i];

  if (s.size() > k) ans += "...";

  cout << ans << endl;

  return 0;
}
