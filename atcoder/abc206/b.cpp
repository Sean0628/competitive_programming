#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  int idx, sum = 0;
  for (int i = 1; sum < n; ++i) {
    sum += i;
    idx = i;
  }

  cout << idx << endl;

  return 0;
}
