#include <iostream>
using namespace std;

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  bool valid = (
      (x - r >= 0) && (x + r <= w) &&
      (y - r >= 0) && (y + r <= h)
      );
  cout << (valid ? "Yes" : "No") << endl;

  return 0;
}
