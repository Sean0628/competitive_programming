#include <vector>
#include <iostream>

void solve (int n, int x) {
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      for (int k = j+1; k <= n; k++) {
        if (i + j + k == x) cnt++;
      }
    }
  }
  std::cout << cnt << std::endl;
}

int main() {
  int n, x;

  while (std::cin >> n >> x && n || x) solve(n, x);

  return 0;
}
