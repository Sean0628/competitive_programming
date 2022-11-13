#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n+1);
  rep(i, n) cin >> a[i];

  int sum = a[0];

  for (int i = 1; i <= n; ++i) {
    sum = (sum ^ a[i]);
  }

  if (sum) cout << "First" << endl;
  else cout << "Second" << endl;
  return 0;
}
