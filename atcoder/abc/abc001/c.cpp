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

string getDegree(int deg) {
  if (1125 <= deg && deg < 3375) return "NNE";
  if (3375 <= deg && deg < 5625) return "NE";
  if (5625 <= deg && deg < 7875) return "ENE";
  if (7875 <= deg && deg < 10125) return "E";
  if (10125 <= deg && deg < 12375) return "ESE";
  if (12375 <= deg && deg < 14625) return "SE";
  if (14625 <= deg && deg < 16875) return "SSE";
  if (16875 <= deg && deg < 19125) return "S";
  if (19125 <= deg && deg < 21375) return "SSW";
  if (21375 <= deg && deg < 23625) return "SW";
  if (23625 <= deg && deg < 25875) return "WSW";
  if (25875 <= deg && deg < 28125) return "W";
  if (28125 <= deg && deg < 30375) return "WNW";
  if (30375 <= deg && deg < 32625) return "NW";
  if (32625 <= deg && deg < 34875) return "NNW";
  return "N";
}

int getLebel(int dis) {
  if (0 <= dis && dis <= 2) return 0;
  if (3 <= dis && dis <= 15) return 1;
  if (16 <= dis && dis <= 33) return 2;
  if (34 <= dis && dis <= 54) return 3;
  if (55 <= dis && dis <= 79) return 4;
  if (80 <= dis && dis <= 107) return 5;
  if (108 <= dis && dis <= 138) return 6;
  if (139 <= dis && dis <= 171) return 7;
  if (172 <= dis && dis <= 207) return 8;
  if (208 <= dis && dis <= 244) return 9;
  if (245 <= dis && dis <= 284) return 10;
  if (285 <= dis && dis <= 326) return 11;
  return 12;
}

int main() {
  int a, b; cin >> a >> b;
  string dir = getDegree(a*10);

  int dis = (int)(b / 6.0 + 0.5);
  int w = getLebel(dis);

  if (w == 0) {
    cout << "C" << " " << w << endl;
  } else {
    cout << dir << " " << w << endl;
  }

  return 0;
}
