#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define debugv(x) cerr << #x << ": " << endl; for (auto& y : x) cerr << y << " "; cerr << endl;
#define debugvv(x) cerr << #x << ": " << endl; for (auto& y : x) { for (auto& z : y) cerr << z << " "; cerr << endl; }
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using PLL = pair<ll, ll>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  int n; cin >> n;
  string t; cin >> t;
  vector<int> ans;
  auto ham = [](string& s, string& t) {
    if (s.size() != t.size()) return INF;

    int ret = 0;
    rep(i, s.size()) {
      if (s[i] != t[i]) ret++;
    }
    return ret;
  };

  auto f = [](string& s, string& t) {
    if (s.size() != t.size()+1) return false;
    int si = 0;
    rep(ti, t.size()) {
      while (si < s.size() && s[si] != t[ti]) si++;
      if (si == s.size()) return false;
      si++;
    }

    return true;
  };

  rep(i, n) {
    string s; cin >> s;
    bool ok = false;
    if (s.size() + 1 >= t.size()) {
      // add 1 char to t (including start and end)
      if (f(s, t)) ok = true;

      // remove 1 char from t
      if (f(t, s)) ok = true;

      // t == t'
      // replace 1 char from t
      if (ham(s, t) <= 1) ok = true;
    }

    if (ok) ans.push_back(i+1);
  }

  out(ans.size());
  for (auto& x : ans) out(x);

  return 0;
}
