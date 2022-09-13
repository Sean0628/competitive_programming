#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) {
  if (b == 0) return a;

  return gcd(b, a%b);
}

const ll pow18 = 1e18;

int main() {
  ll a, b; cin >> a >> b;

  ll r = b/gcd(a, b);
  if (r > pow18/a) cout << "Large" << endl;
  else cout << a*r << endl;

  return 0;
}
