#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  queue<int> que;
  string s; cin >> s;
  x--;

  que.push(x);
  s[x] = '@';

  while (!que.empty()) {
    int pos = que.front();
    que.pop();

    if (pos >= 1 && s[pos-1] == '.') {
      s[pos-1] = '@';
      que.push(pos-1);
    }
    if (pos < n-1 && s[pos+1] == '.') {
      s[pos+1] = '@';
      que.push(pos+1);
    }
  }

  cout << s << endl;
  return 0;
}
