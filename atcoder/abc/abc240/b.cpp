#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  set<int> s;

  rep(i, n) cin >> v[i];
  rep(i, n) s.insert(v[i]);

  cout << s.size() << endl;

  return 0;
}
