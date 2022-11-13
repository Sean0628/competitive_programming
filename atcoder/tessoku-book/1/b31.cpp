#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  ll a = n/3;
  ll b = n/5;
  ll c = n/7;

  ll ab = n/15;
  ll ac = n/21;
  ll bc = n/35;

  ll abc = n/105;

  ll ans = a+b+c-(ab+ac+bc)+abc;
  cout << ans << endl;
  return 0;
}
