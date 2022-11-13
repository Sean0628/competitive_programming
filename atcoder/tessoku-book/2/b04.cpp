#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string n; cin >> n;
  reverse(n.begin(), n.end());

  int tot = 0;
  rep(i, n.size()) {
    int num = n[i] - '0';
    tot += num * (1 << i);
  }

  cout << tot << endl;
  return 0;
}
