#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d; cin >> d >> n;
  vector<int> vec(d+1);
  rep(i, n) {
    int l, r; cin >> l >> r;
    vec[l]++; vec[r+1]--;
  }


  int tot = 0;
  for (int i = 1; i <= d; ++i) {
    tot += vec[i];
    cout << tot << endl;
  }
  return 0;
}
