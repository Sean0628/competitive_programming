#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  int tot = 0;
  for (int i = 1; i <= n; ++i) {
    bool c = false;

    int t = i;
    while (t > 0) {
      if (t%10 == 7){
        c = true;
        break;
      }

      t /= 10;
    }

    stringstream os;
    os << oct << i;
    string o = os.str();

    if (c) {
      tot++;
      continue;
    }

    while (o.length() > 0) {
      int ot = o.back() - '0';
      o.pop_back();

      if (ot%10 == 7){
        c = true;
        break;
      }
    }

    if (c) tot++;
  }
  cout << n - tot << endl;

  return 0;
}
