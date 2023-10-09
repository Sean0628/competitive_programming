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
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m); rep(i, m) cin >> a[i];
  vector<P> p(m);
  rep(i, m) {
    p[i] = {a[i], i};
  }
  sort(rall(p));
  vector<string> s(n); rep(i, n) cin >> s[i];

  vector<int> tot(n, 0);
  rep(i, n) {
    tot[i] += i+1;

    rep(j, m) {
      if (s[i][j] == 'o') tot[i] += a[j];
    }
  }

  rep(i, n) {
    bool ok = true; int mx = 0;
    rep(j, n) {
      if (i == j) continue;
      if (tot[i] <= tot[j]) {
         ok = false;
         chmax(mx, tot[j]);
      }
    }
    if (ok) out(0);
    else {
      int sum = tot[i];
      int cnt = 0;
      rep(j, m) {
        auto [po, idx] = p[j];
        if (s[i][idx] == 'o') continue;

        sum += po;
        cnt++;
        if (sum > mx) {
          out(cnt);
          break;
        }
      }
    }
  }
  return 0;
}
