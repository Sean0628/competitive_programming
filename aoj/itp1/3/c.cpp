#include <iostream>

using namespace std;

int main() {
  int x = 1, y = 1;

  while (0 == 0) {
    cin >> x >> y;

    if (x == 0 && y ==0) break;

    if (x > y)
      cout << y << " " << x << endl;
    else
      cout << x << " " << y << endl;
  }

  return 0;
}
