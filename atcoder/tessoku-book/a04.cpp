#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

string to_binary(int n) {
  if (n == 0) return "0";

  string res;
  while (n > 0) {
    res = char(n%2 + '0') + res;
    n /= 2;
  }

  return res;
}

int main() {
  int n; cin >> n;
  string b = to_binary(n);
  int pad = (10-b.size());

  rep(i, pad) cout << "0";
  cout << b << endl;
  return 0;
}
