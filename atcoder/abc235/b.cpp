#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);

  rep(i, n) cin >> h[i];
  int m = 0;
  rep(i, n) {
    if (m < h[i]) {
      m = h[i];
    } else {
      break;
    }
  }

  cout << m << endl;

  return 0;
}
