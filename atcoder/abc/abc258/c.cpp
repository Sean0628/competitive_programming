#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  string s; cin >> s;

  int p = 0;
  rep(i, q) {
    int q1, q2; cin >> q1 >> q2;
    if (q1 == 1) {
      p = (p-q2+n) % n;
    }
    else cout << s[(p+q2-1) % n] << '\n';
  }

  return 0;
}
