#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int s, w; cin >> s >> w;

  if (s > w) cout << "safe" << endl;
  else cout << "unsafe" << endl;
  return 0;
}
