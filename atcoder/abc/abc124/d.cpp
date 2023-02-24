#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  vector<int> nums;
  int curr = 1;
  int cnt = 0;

  rep(i, n) {
    if (s[i] == (char) ('0' + curr)) cnt++;
    else {
      nums.emplace_back(cnt);
      curr = 1 - curr;
      cnt = 1;
    }
  }
  if (cnt != 0) nums.emplace_back(cnt);

  if (nums.size()%2 == 0) nums.emplace_back(0);


  rep(i, nums.size()) cout << nums[i] << " ";
  cout << endl;
  int add = 2*k+1;
  int ans = 0;

  int l = 0;
  int r = 0;
  int tmp = 0;

  for (int i = 0; i < nums.size(); i += 2) {
    int nl = i;
    int nr = min(i+add, (int) nums.size());

    while (nl > l) {
      tmp -= nums[l];
      l++;
    }

    while (nr > r) {
      tmp += nums[r];
      r++;
    }

    ans = max(tmp, ans);
  }

  out(ans);
  return 0;
}
