#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;

  vector<P> p;

  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    if (c == 'o') p.emplace_back(i, j);
  }

  const auto& [a, b] = p[0];
  const auto& [c, d] = p[1];

  cout << abs(a - c) + abs(b - d) << endl;

  return 0;
}
