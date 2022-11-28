#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h), t(h);
  vector<string> sc(w), tc(w);

  rep(i, h) cin >> s[i];
  rep(i, h) cin >> t[i];

  rep(i, w) {
    string tmp = "";
    rep(j, h) {
      tmp += t[j][i];
    }
    tc[i] = tmp;
  }

  rep(i, w) {
    string tmp = "";
    rep(j, h) {
      tmp += s[j][i];
    }
    sc[i] = tmp;
  }

  sort(tc.begin(), tc.end());
  sort(sc.begin(), sc.end());

  rep(i, h) {
    rep(j, w) {
      if (sc[j][i] != tc[j][i]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;

  return 0;
}
