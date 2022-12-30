#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string x;cin >> x;
  vector<int> a(x.size());
  rep(i, x.size()) a[i] = x[i] - '0';

  string ans;
  if (
      (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) ||
      (
       (a[0]+1)%10 == a[1] &&
       (a[1]+1)%10 == a[2] &&
       (a[2]+1)%10 == a[3]
       )
      ) ans = "Weak";
  else ans = "Strong";

  cout << ans << endl;
  return 0;
}
