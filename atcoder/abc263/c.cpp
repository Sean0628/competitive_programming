#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int n, m;

void output(vector<int> a) {
  rep(i, n) printf("%d%c", a[i], i==n-1 ? '\n' : ' ');
}

void f(vector<int> a) {
  if (a.size() == n) {
    output(a);
    return;
  }

  int sx = 1;
  if (a.size() > 0) sx = a.back() + 1;
  a.push_back(sx);

  while (a.back() <= m) {
    f(a);
    a.back()++;
  }
}

int main() {
  cin >> n >> m;
  f({});
  return 0;
}
