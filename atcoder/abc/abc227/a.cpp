#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, a;
  cin >> n >> k >> a;
  vector<int> c(n, 0);

  int ans = (a + k -1) % n;
  if (ans == 0) ans = n;

  cout << ans << endl;
  return 0;
}
