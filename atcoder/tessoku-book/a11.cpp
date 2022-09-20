#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int l = 0, r = n;

  while (true) {
    int idx = (l+r)/2;

    if (x < a[idx]) r = idx - 1;
    else if (x > a[idx]) l = idx + 1;
    else {
      cout << idx+1 << endl;
      break;
    }
  }

  return 0;
}
