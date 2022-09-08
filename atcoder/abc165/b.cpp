#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x; cin >> x;

  ll a = 100;
  int cnt = 0;
  while (a < x) {
    cnt++;
    a = a + a*1/100;
  }

  cout << cnt << endl;
  return 0;
}
