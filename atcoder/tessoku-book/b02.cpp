#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b; cin >> a >> b;

  bool ok = false;
  for (int i = a; i <= b; ++i) {
    if (100%i == 0) ok = true;
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
