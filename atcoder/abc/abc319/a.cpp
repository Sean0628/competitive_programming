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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;
  map<string, int> mp;
  mp["tourist"] = 3858;
  mp["ksun48"] = 3679;
  mp["Benq"] = 3658;
  mp["Um_nik"] = 3648;
  mp["apiad"] = 3638;
  mp["Stonefeang"] = 3630;
  mp["ecnerwala"] = 3613;
  mp["mnbvmar"] = 3555;
  mp["newbiedmy"] = 3516;
  mp["semiexp"] = 3481;

  out(mp[s]);

  return 0;
}
