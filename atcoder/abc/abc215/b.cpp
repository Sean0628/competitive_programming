#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;

  ll k = 0;
  for(;;) {
    if ((ll) pow(2, k) > n) break;
    k++;
  }

  cout << k-1 << endl;

  return 0;
}
