#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, s = 1;
  cin >> n;

  vector<int> d(n);

  rep(i, n) cin >> d[i];

  sort(d.begin(), d.end(), greater<int>());

  int p = d[0];
  rep(i, n) {
    if (d[i] < p) {
      s++;
      p = d[i];
    }
  }

  cout << s << endl;

  return 0;
}
