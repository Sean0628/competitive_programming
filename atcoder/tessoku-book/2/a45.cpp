#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; char c; cin >> n >> c;
  string a; cin >> a;

  int score = 0;
  rep(i, n) {
    if (a[i] == 'R') score++;
    if (a[i] == 'B') score += 2;
  }

  string ans = "No";
  if (score % 3 == 0 && c == 'W') ans = "Yes";
  if (score % 3 == 1 && c == 'R') ans = "Yes";
  if (score % 3 == 2 && c == 'B') ans = "Yes";

  cout << ans << endl;
  return 0;
}
