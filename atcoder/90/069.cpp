#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int mod = 1e9 + 7;

int binpower(int a, ll b) {
  int ans = 1;
  while (b != 0) {
    if (b%2 == 1) ans = (ll)(ans)*a % mod;
    a = (ll)(a)*a % mod;
    b /= 2;
  }

  return ans;
}

int main() {
  ll n; int k; cin >> n >> k;
  if (k == 1) cout << (n == 1 ? 1 : 0) << endl;
  else if (n == 1) cout << k % mod << endl;
  else if (n == 2) cout << (ll)(k) * (k-1) % mod << endl;
  else cout << (ll)(k) * (k-1) % mod * binpower(k-2, n-2) % mod << endl;
  return 0;
}
