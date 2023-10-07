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
  int n = 3, m = 4;
  vector p(n, vector<string> (m));
  rep(i, n) rep(j, m) cin >> p[i][j];

  vector<vector<vector<string>>> s(n);
  rep(pi, n) {
    rep(ri, m) {
      for (int di = -m; di < m; ++di) {
        for (int dj = -m; dj < m; ++dj) {
          vector np(m, string(m, '.'));
          bool ok = true;

          rep(i, m) rep(j, m) {
            if (p[pi][i][j] == '.') continue;

            int ni = i + di, nj = j + dj;
            if (ni < 0 || ni >= m || nj < 0 || nj >= m) {
              ok = false;
              continue;
            }
            np[ni][nj] = '#';
          }

          if (ok) s[pi].push_back(np);
        }
      }

      // rotate
      {
        auto pre = p[pi];
        rep(i, m) rep(j, m) {
          p[pi][i][j] = pre[j][m-i-1];
        }
      }
    }
  }

  for (auto p0 : s[0]) {
    for (auto p1 : s[1]) {
      for (auto p2 : s[2]) {
        vector cnt(m, vector<int> (m));
        auto put = [&](vector<string> p) {
          rep(i, m) rep(j, m) {
            if (p[i][j] == '#') cnt[i][j]++;
          }
        };

        put(p0);
        put(p1);
        put(p2);

        if (cnt == vector(m, vector<int> (m, 1))) {
          out("Yes");
          return 0;
        }
      }
    }
  }

  out("No");
  return 0;
}
