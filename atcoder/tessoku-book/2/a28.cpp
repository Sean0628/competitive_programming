#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 10000;

int main() {
  int n; cin >> n;

  int tot = 0;
  rep(i, n) {
    char t;
    int a; cin >> t >> a;

    if (t == '+') {
      tot = (tot+a)%MOD;
    } else if (t == '-') {
      tot = (tot-a)%MOD;
    } else if (t == '*') {
      tot = (tot*a)%MOD;
    }

    if (tot < 0) tot += MOD;
    cout << tot << endl;
  }

  return 0;
}
