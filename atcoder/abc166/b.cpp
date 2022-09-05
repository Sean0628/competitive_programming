#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;

  vector<int> snuke(n);
  rep(i, k) {
    int d; cin >> d;
    vector<int> a(d);
    rep(j, d) {
      int idx; cin >> idx;
      snuke[idx-1]++;
    }
  }

  int cnt = 0;
  rep(i, n) {
    if (snuke[i] == 0) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
