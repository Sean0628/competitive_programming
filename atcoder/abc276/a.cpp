#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  int l = 0;
  rep(i, s.size()) {
    if (s[i] == 'a') l = i+1;
  }

  if (l == 0) l = -1;
  cout << l << endl;

  return 0;
}
