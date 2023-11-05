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
  string r, c; cin >> r >> c;

  auto f = [&](auto f, char x, vector<string>& g) -> bool {
    if (x == 'D') {
      string tr, tc;
      rep(i, n) {
        rep(j, n) {
          if (g[i][j] != '.') {
            tr += g[i][j];
            break;
          }
        }
      }

      rep(j, n) {
        rep(i, n) {
          if (g[i][j] != '.') {
            tc += g[i][j];
            break;
          }
        }
      }

      if (tr == r && tc == c) {
        out("Yes");
        rep(i, n) out(g[i]);
        return true;
      }

      return false;
    }

    vector<int> p(n);
    iota(all(p), 0);
    do {
      auto t = g;
      bool ok = true;
      rep(i, n) {
        if (t[i][p[i]] == '.') {
          t[i][p[i]] = x;
        } else {
          ok = false;
          break;
        }
      }

      if (!ok) continue;
      if (f(f, x+1, t)) return true;

    } while (next_permutation(all(p)));

    return false;
  };

  vector<string> s(n, string(n, '.'));
  if (!f(f, 'A', s)) out("No");

  return 0;
}
