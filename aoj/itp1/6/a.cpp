#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers(n);

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  reverse(numbers.begin(), numbers.end());

  for (int i = 0; i < n; ++i) {
    char c = (i == n - 1) ? '\n'  : ' ';
    cout << numbers[i] << c;
  }

  return 0;
}
