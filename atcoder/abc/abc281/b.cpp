#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  bool ok = true;
  if (!isupper(s[0])) ok = false;

  if (s[1] == '0') ok = false;
  for (int i = 1; i < 7; ++i) {
    if (!isdigit(s[i])) ok = false;
  }
  if (!isupper(s[7])) ok = false;

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
