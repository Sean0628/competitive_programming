#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
#include <map>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

const int N = 8;

int main() {
  int k; cin >> k;
  vector<bool> c(N), d1(2*N-1), d2(2*N-1);
  vector<string> board(N, string(N, '.'));
  rep(i, k) {
    int x, y; cin >> x >> y;
    board[x][y] = 'Q';
    c[y] = d1[x+y] = d2[x-y+N-1] = true;
  }

  auto canPlace = [&](int i, int j) {
    return !c[j] && !d1[i+j] && !d2[i-j+N-1];
  };

  auto solve = [&](auto solve, int i) -> bool {
    if (i == N) return true;

    rep(j, N) {
      if (board[i][j] == 'Q') {
        if (solve(solve, i+1)) return true;
      } else if (canPlace(i, j)) {
        board[i][j] = 'Q';
        c[j] = d1[i+j] = d2[i-j+N-1] = true;
        if (solve(solve, i+1)) return true;
        board[i][j] = '.';
        c[j] = d1[i+j] = d2[i-j+N-1] = false;
      }
    }
    return false;
  };

  if (solve(solve, 0)) {
    rep(i, N) {
      rep(j, N) {
        cout << board[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}
