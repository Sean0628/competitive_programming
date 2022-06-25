#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  string o = "ABCDEFGHIGKLMNOPQRSTUVWXYZ";
  string s;

  rep(i, o.size()) rep(j, n) s += o[i];

  cout << s[x-1] << endl;

  return 0;
}
