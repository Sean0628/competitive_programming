#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];


  for (int i = 0; i <= n; ++i) {
    bool ok = true;
    for (int x:a) {
      if (x == i) ok = false;
    }

    if (ok) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}
