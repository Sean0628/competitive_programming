#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;

  vector<int> a(n), pos(n);

  rep(i, n) a[i] = i, pos[i] = i;

  rep(qi, q) {
    int x; cin >> x;
    x--;
    int i = pos[x];
    int j = i + 1;
    if (j == n) j = i - 1;

    swap(a[i], a[j]);
    pos[a[i]] = i;
    pos[a[j]] = j;
  }

  rep(i, n) {
    cout << a[i]+1;
    if (i != n -1) cout << ' ';
  }

  cout << endl;

  return 0;
}
