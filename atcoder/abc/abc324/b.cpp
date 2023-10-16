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
  ll n; cin >> n;
  vector<ll> two, three;
  two.push_back(1);
  three.push_back(1);
  for (int i = 1; i <= 60; ++i) {
    ll tmp = two[i-1] * 2;
    if (tmp > n) break;

    two.push_back(tmp);
  }
  for (int i = 1; i <= 40; ++i) {
    ll tmp = three[i-1] * 3;
    if (tmp > n) break;
    three.push_back(tmp);
  }

  rep(i, two.size()) {
    rep(j, three.size()) {
      if (two[i] * three[j] > n) break;
      if (n == two[i] * three[j]) {
        out("Yes");
        return 0;
      }
    }
  }

  out("No");
  return 0;
}
