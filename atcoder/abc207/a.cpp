#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> n(3);
  rep(i, 3) cin >> n[i];

  sort(n.begin(), n.end(), greater<int>());

  cout << n[0] + n[1] << endl;


  return 0;
}

