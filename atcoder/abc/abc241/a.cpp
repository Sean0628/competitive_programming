#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n = 10;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  int idx = 0;
  rep(i, 3) idx = a[idx];

  cout << idx << endl;

  return 0;
}
