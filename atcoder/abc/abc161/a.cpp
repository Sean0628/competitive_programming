#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  vector<int> box(3);
  rep(i, 3) cin >> box[i];

  swap(box[0], box[1]);
  swap(box[0], box[2]);

  rep(i, 3) cout << box[i] << " ";
  cout << endl;
  return 0;
}
