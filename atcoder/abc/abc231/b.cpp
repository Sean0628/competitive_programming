#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<int> r(n, 0);
  rep(i, n) rep(j, n) if (s[i] == s[j]) r[i]++;
  int m = 0;
  string ans;
  rep(i, n) {
    if (m < r[i]) {
      m = r[i];
      ans = s[i];
    }
  }

  cout << ans << endl;

  return 0;
}
