#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  int n = s.size();
  vector<string> a(n);

  rep(i, n) a[i] = s.substr(i, n-i) + s.substr(0, i);

  cout << *min_element(a.begin(), a.end()) << endl;
  cout << *max_element(a.begin(), a.end()) << endl;

  return 0;
}
