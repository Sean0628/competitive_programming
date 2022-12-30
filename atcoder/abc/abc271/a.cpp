#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<char> l = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main() {
  int n; cin >> n;
  string ans = "";

  while (n > 0) {
    int idx = n%16;
    ans += l[idx];
    n /= 16;
  }

  reverse(ans.begin(), ans.end());

  if (ans.size() == 1) cout << "0" << ans << endl;
  else if (ans.size() == 0) cout << "00" << endl;
  else cout << ans << endl;

  return 0;
}
