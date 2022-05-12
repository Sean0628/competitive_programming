#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  char str[1001], p[1001], c[8];
  int q, a, b;
  cin >> str >> q;

  rep(i, q) {
    cin >> c >> a >> b;
    switch (c[2]) {
      case 'i': {
                  for (int i = a; i <= b; ++i) cout << str[i];
                  cout << "\n";
                  break;
                }
      case 'v': {
                  int l = a, r = b;
                  while (l < r) swap(str[l++], str[r--]);
                  break;
                }
      case 'p': {
                  cin >> p;
                  rep(i, b - a + 1) str[a+i] = p[i];
                  break;
                }
    }
  }
  return 0;
}
