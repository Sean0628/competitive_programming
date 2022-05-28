#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  set<vector<int>> s;

  rep(i, n) {
    int l;
    cin >> l;
    vector<int> v(l);
    for (auto& x : v) cin >> x;
    s.insert(v);
  }

  cout << s.size() << endl;
}
