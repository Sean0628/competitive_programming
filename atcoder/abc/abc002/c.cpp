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

// Shoelace formula
double calcTriangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
  return abs(x1*y2 + x2*y3 + x3*y1 - x1*y3 - x2*y1 - x3*y2) / 2;
}

int main() {
  double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  double area = calcTriangleArea(x1, y1, x2, y2, x3, y3);
  printf("%.10f\n", area);
  return 0;
}
