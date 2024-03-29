#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, max, min, sum;

  cin >> n;
  vector<long long> numbers(n);

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  min = *min_element(numbers.begin(), numbers.end());
  max = *max_element(numbers.begin(), numbers.end());
  sum = accumulate(numbers.begin(), numbers.end(), 0LL);

  cout << min << " " << max << " " << sum << endl;

  return 0;
}
