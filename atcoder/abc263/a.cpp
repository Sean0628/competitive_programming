#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> c(5);
  rep(i, 5) cin >> c[i];

  map<int, int> cnt;

  rep(i, 5) cnt[c[i]]++;

  if (cnt.size() != 2) {
    cout << "No" << endl;
    return 0;
  }

   for (auto& x : cnt) {
    if (x.second == 2 || x.second == 3) continue;

    cout << "No" << endl;
    return 0;
  }



  cout << "Yes" << endl;

  return 0;
}
