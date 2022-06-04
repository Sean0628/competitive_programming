#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<string, int>;

bool sortBySec(const P &a, const P &b) {
  return a.second > b.second;
}

int main() {
  int n; cin >> n;
  vector<P> a(n);

  rep(i, n) {
    string s; int t;
    cin >> s >> t;
    a[i] = make_pair(s, t);
  }

  sort(a.begin(), a.end(), sortBySec);

  rep(i, n) if (i == 1) cout << a[i].first << endl;

  return 0;
}
