#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  vector<int> c(n+1);
  for (int i = 1; i <= (n-1); ++i) {
    int a, b; cin >> a >> b;
    c[a]++, c[b]++;
  }

  string ans = "No";
  for (int i = 1; i <= n; ++i) {
    if (c[i] == (n-1)) {
      ans = "Yes";
    }
  }

  cout << ans << endl;
  return 0;
}
