#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> p(2, 0);
  rep(i, n-1) {
    int tmp; cin >> tmp;
    p.push_back(tmp);
  }

  int cnt = n-1;
  int ans = 1;
  int idx = p[n];
  while (cnt > 0) {
    if (idx == 1) break;

    idx = p[idx];
    ans++;

    cnt--;
  }

  cout << ans << endl;


  return 0;
}
