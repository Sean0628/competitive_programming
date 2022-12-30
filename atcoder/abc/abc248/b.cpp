#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b, k, cnt = 0;
  cin >> a >> b >> k;

  while (a < b) {
    a *= k;
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}
