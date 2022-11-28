#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m);
  map<int, int> cnt;
  rep(i, m) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  rep(i, n) {
    cout << m - cnt[i+1] << endl;
  }
  return 0;
}
