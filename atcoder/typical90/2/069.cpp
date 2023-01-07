#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int M = 1e9 + 7;

int binpower(int a, ll b) {
  int ans = 1;

  while (b != 0) {
    if (b%2 == 1) ans = (ll) ans * a%M;

    a = (ll) a*a%M;
    b /= 2;
  }

  return ans;
}

int main() {
  ll n; int k; cin >> n >> k;
  if (k == 1) cout << (n == 1 ? 1 : 0) << endl;
  else if (n == 1) cout << k%M << endl;
  else if (n == 2) cout << (ll) k * (k-1)%M << endl;
  else cout << (ll) k * (k-1)%M * binpower(k-2, n-2) % M << endl;
  return 0;
}
