#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;


const int WS = 0, RS = 1, BS = 2;

int main() {
  int n; char c; cin >> n >> c;
  vector<char> a(n);
  rep(i, n) cin >> a[i];

  int tot = 0;
  rep(i, n) {
    if (a[i] == 'W') tot += WS;
    if (a[i] == 'R') tot += RS;
    if (a[i] == 'B') tot += BS;
  }

  string ans = "No";
  if (tot % 3 == WS && c == 'W') ans = "Yes";
  if (tot % 3 == RS && c == 'R') ans = "Yes";
  if (tot % 3 == BS && c == 'B') ans = "Yes";

  cout << ans << endl;
  return 0;
}
