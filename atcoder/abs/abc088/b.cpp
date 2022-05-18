#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, A = 0, B = 0;
  cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  rep(i, n) {
    if (i % 2 == 0) {
      A += a[i];
    } else {
      B += a[i];
    }
  }

  cout << (A - B) << endl;

  return 0;
}
