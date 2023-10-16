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
  int n; string t; cin >> n >> t;
  int m = t.size();
  vector<string> s(n); rep(i, n) cin >> s[i];

  vector<int> l(n), r(n);
  rep(ri, 2) {
    rep(i, n) {
      for (char c : s[i]) {
        if (l[i] < m && c == t[l[i]]) l[i]++;
      }
    }

    swap(l, r);
    reverse(all(t));
    rep(i, n) reverse(all(s[i]));
  }

  vector<int> c(m + 1);
  rep(i, n) c[r[i]]++;
  for (int i = m-1; i >= 0; --i) c[i] += c[i + 1];

  ll ans = 0;
  for (int nl : l) ans += c[m - nl];
  out(ans);

  return 0;
}
