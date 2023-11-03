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
  vector<PLL> a(n);
  rep(i, n) {
    ll t, d; cin >> t >> d;
    a[i] = {t, t+d};
  }

  sort(all(a));

  int ans = 0;
  ll t = 0;
  int ai = 0;
  priority_queue<ll, vector<ll>, greater<ll>> q;

  while (ai < n || !q.empty()) {
    while (ai < n && a[ai].first <= t) {
      q.push(a[ai].second);
      ai++;
    }
    while (!q.empty() && q.top() < t) q.pop();
    if (!q.empty()) ans++, q.pop();

    if (q.empty() && ai < n) t = a[ai].first;
    else t++;
  }

  out(ans);
  return 0;
}
