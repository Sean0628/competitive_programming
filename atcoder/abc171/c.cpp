#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const string s = "abcdefghijklmnopqrstuvwxyz";

int main() {
  ll n; cin >> n;
  string ans = "";

  while (n > 0) {
    n--;
    ans += 'a'+n%26;
    n/=s.size();
  }

  reverse(ans.begin(), ans.end());

  cout << ans << endl;

  return 0;
}
