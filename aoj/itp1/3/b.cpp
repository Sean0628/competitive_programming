#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num = 1;

  for (int i = 0; num != 0; ++i) {
    cin >> num;

    if (num == 0) break;
    cout << "Case " << i + 1 << ": " << num << endl;
  }

  return 0;
}
