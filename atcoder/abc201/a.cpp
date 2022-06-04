#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  sort(a.begin(), a.end());

  int iv = 0;
  int diff;
  for (int i = 0; i <= 1; ++i) {
    if ((i != 0) && (!(diff == a[i+1] - a[i]))) {
      iv = 1;
      break;
    }

    diff = a[i+1] - a[i];
  }

  cout << (iv ? "No" : "Yes") << endl;

  return 0;
}
