#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int l,r;
  string s;
  cin >> l >> r >> s;

  int j = 1;
  for (int i = l-1; i < r; ++i) {
    if (i >= (r-j)) break;

    swap(s[i], s[r-j]);
    j++;
  }

  cout << s << endl;

  return 0;
}
