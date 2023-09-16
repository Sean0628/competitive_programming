#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
using P = pair<int, int>;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n = 8;
  int k; cin >> k;
  vector<string> board(n, string(n, '.'));

  // c: horizontal
  // d1: diagonal top-right to bottom-left
  // d2: diagonal top-left to bottom-right
  vector<bool> c(n), d1(2*n-1), d2(2*n-1);
  rep(i, k) {
    int x, y; cin >> x >> y;
    board[x][y] = 'Q';
    c[y] = d1[x+y] = d2[x-y+n-1] = true;
  }

  auto canPlace = [&](int i, int j) {
    return !c[j] && !d1[i+j] && !d2[i-j+n-1];
  };

  auto solve = [&](auto self, int i) -> bool {
    if (i == n) return true;

    rep(j, n) {
      if (board[i][j] == 'Q') {
        if (self(self, i+1)) return true;
      } else if (canPlace(i, j)) {
        board[i][j] = 'Q';
        c[j] = d1[i+j] = d2[i-j+n-1] = true;

        if (self(self, i+1)) return true;

        board[i][j] = '.';
        c[j] = d1[i+j] = d2[i-j+n-1] = false;
      }
    }

    return false;
  };

  if (solve(solve, 0)) {
    rep(i, n) {
      rep(j, n) cout << board[i][j];
      cout << endl;
    }
  }
  return 0;
}
