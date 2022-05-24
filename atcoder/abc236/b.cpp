#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, c;
  cin >> n;
  vector<int> ans(n, 0);
  rep(i, (n*4) - 1) {
    cin >> c;
    ++ans[c-1];
  }

  rep(i, n) if (ans[i] != 4) cout << (i+1) << endl;

  return 0;
}
