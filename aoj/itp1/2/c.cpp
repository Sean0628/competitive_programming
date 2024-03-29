#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n = 3;
  vector<int> numbers(n);

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < n; ++i) {
    cout << numbers[i];

    if (i != n - 1)
      cout << ' ';
    else
      cout << endl;
  }

  return 0;
}
