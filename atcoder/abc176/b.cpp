#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string n; cin >> n;

  ll tot = 0;
  rep(i, n.size()) {
    tot += n[i] - '0';
    tot %= 9;
  }

  if (tot == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
