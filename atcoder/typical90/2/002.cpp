#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> v(1<<n), ans;
  rep(i, 1<<n) {
    for (int j = n -1; j >= 0; --j) {
      if (i>>j&1) {
        v[i] += ')';
      } else {
        v[i] += '(';
      }
    }

    auto solve = [ans](string s) {
      int cnt = 0;
      rep(i, s.size()) {
        if (s[i] == '(') cnt++;
        else cnt--;

        if (cnt < 0) return false;
      }

      return cnt == 0;
    };

    if (solve(v[i])) cout << v[i] << endl;
  }

  return 0;
}
