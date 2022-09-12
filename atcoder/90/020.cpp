#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a; cin >> a;
  int b, c; cin >> b >> c;

  ll d = 1;
  rep(i, b) d*=c;

  cout << (a < d ? "Yes" : "No") << endl;
  return 0;
}
