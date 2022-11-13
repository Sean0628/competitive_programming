#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<int> vec(n);
  rep(i, n) vec[i] = i+1;

  int idx = 0;
  rep(i, q) {
    int num; cin >> num;
    if (num == 1) {
      int x, y; cin >> x >> y;
      x--;

      if (idx != 0) vec[idx - x] = y;
      else vec[x] = y;
    } else if (num == 2) {
      if (idx != 0) idx = 0;
      else idx = vec.size()-1;
    } else if (num == 3) {
      int x; cin >> x;
      x--;
      if (idx != 0) {
        cout << vec[idx - x] << endl;
      } else {
        cout << vec[x] << endl;
      }
    }
  }
  return 0;
}
