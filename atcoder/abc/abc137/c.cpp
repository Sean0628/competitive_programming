#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<string> vec(n);
  map<map<char, int>, int> mmp;
  multiset<map<char, int>> mst;
  rep(i, n) {
    map<char, int> mp;
    cin >> vec[i];
    rep(j, 10){
      mp[vec[i][j]]++;
    }
    mmp[mp]++;
  }

  auto nCr = [](int n) {
    return (ll)n*(n-1)/2;
  };

  ll cnt = 0;
  for (auto e : mmp) {
    cnt += nCr(e.second);
  }

  out(cnt);
  return 0;
}
