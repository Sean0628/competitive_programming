#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  ll a = n/3, b = n/5, c = n/7;
  ll ab = n/15, bc = n/35, ac = n/21;
  ll abc = n/105;

  cout << a+b+c-(ab+bc+ac)+abc << endl;
  return 0;
}
