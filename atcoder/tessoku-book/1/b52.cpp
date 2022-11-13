#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  string a; cin >> a;
  x--;

  queue<int> q;

  q.push(x); a[x] = '@';
  while (!q.empty()) {
    int pos = q.front(); q.pop();
    if (pos - 1 >= 0 && a[pos-1] == '.') {
      a[pos-1] = '@';
      q.push(pos-1);
    }

    if (pos + 1 < n && a[pos+1] == '.') {
      a[pos+1] = '@';
      q.push(pos+1);
    }
  }
  rep(i, n) cout << a[i];
  cout << endl;

  return 0;
}
