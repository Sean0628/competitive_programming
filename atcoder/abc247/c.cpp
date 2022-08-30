#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> sn(17);

  sn[1] = "1";
  for (int i = 2; i <= 16; ++i) {
    sn[i] = sn[i-1] + " " + to_string(i) + " " + sn[i-1];
  }

  cout << sn[n] << endl;
  return 0;
}
