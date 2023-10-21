#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

class UnionFind {
  public:
    vector<int> parent;
    vector<int> size;

  void init(int n) {
    rep(i, n+1) {
      parent.push_back(-1);
      size.push_back(1);
    }
  }

  int root(int x) {
    while (true) {
      if (parent[x] == -1) break;
      x = parent[x];
    }

    return x;
  }

  void merge(int u, int v) {
    int r1 = root(u), r2 = root(v);
    if (r1 == r2) return;

    if (size[r1] < size[r2]) {
      parent[r1] = r2;
      size[r2] += size[r1];
    } else {
      parent[r2] = r1;
      size[r1] += size[r2];
    }
  }

  bool same(int u, int v) {
    return root(u) == root(v);
  }
};

int main() {
  int n, m; cin >> n >> m;
  vector<pair<int, P>> to;
  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    to.push_back({c, {a, b}});
  }

  UnionFind d;
  d.init(n);

  // Kruskal's algorithm
  sort(all(to));

  ll ans = 0;

  rep(i, m) {
    int c = to[i].first;
    int a = to[i].second.first;
    int b = to[i].second.second;
    if (d.same(a, b)) continue;

    ans += c;
    d.merge(a, b);
  }

  out(ans);
  return 0;
}
