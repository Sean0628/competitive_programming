#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;

  vector<vector<int>> b(k);

  vector<int> a(n);

  rep(i, n) {
    cin >> a[i];
    b[i%k].push_back(a[i]);
  }

  rep(i, k) sort(b[i].rbegin(), b[i].rend());

  sort(a.begin(), a.end());
  vector<int> na;

  rep(i, n) {
    na.push_back(b[i%k].back());
    b[i%k].pop_back();
  }

  if (a == na) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
