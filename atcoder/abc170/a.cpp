#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n = 5;
  vector<int> x(n);
  rep(i, n) cin >> x[i];

  rep(i, n) {
    if (!x[i]) cout << i+1 << endl;
  }
  return 0;
}
