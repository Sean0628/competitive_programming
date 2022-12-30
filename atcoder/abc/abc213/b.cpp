#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> tmp = a;
  sort(tmp.begin(), tmp.end());

  int ans;
  rep(i, n) if (a[i] == tmp[n-2]) ans = i;

  cout << (ans+1) << endl;

  return 0;
}
