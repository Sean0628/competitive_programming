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
  int n = 9;
  vector<vector<int>> g(n, vector<int>(n));
  rep(i, n) {
    rep(j, n) cin >> g[i][j];
  }

  auto check = [&]() {
    bool res = true;
    // every row has 1-9
    set<int> s;
    rep(i, n) {
      s.clear();
      rep(j, n) {
        s.insert(g[i][j]);
      }
      if (s.size() != n) res = false;
    }
    // every column has 1-9
    rep(i, n) {
      s.clear();
      rep(j, n) {
        s.insert(g[j][i]);
      }
      if (s.size() != n) res = false;
    }
    // every 3x3 has 1-9
    rep(i, 3) {
      rep(j, 3) {
        s.clear();
        rep(k, 3) {
          rep(l, 3) {
            s.insert(g[i*3+k][j*3+l]);
          }
        }
        if (s.size() != n) res = false;
      }
    }

    return res;
  };

  cyn(check());
  return 0;
}
