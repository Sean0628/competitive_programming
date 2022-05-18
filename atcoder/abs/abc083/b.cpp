#include <bits/stdc++.h>
using namespace std;


int find_sum_of_digits(int n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }

  return s;
}

int main() {
  int n, a, b, t = 0;
  cin >> n >> a >> b;

  for (int i = 1; i <= n; ++i) {
    int s = find_sum_of_digits(i);
    if (s >= a && s <= b) t += i;
  }

  cout << t << endl;

  return 0;
}
