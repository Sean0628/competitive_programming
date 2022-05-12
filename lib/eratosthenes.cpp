#include <bits/stdc++.h>
using namespace std;

vector<bool> eratosthenes(int n) {
  vector<bool> isPrime(n + 1, true);

  isPrime[0] = isPrime[1] = false;

  for (int p = 2; p <= n; ++p) {
    if (!isPrime[p]) continue;

    for (int q = p * 2; q <= n; q += p) {
      isPrime[q] = false;
    }
  }

  return isPrime;
}

int main() {
  vector<bool> isPrime = eratosthenes(50);

  for (int v = 0; v <= 50; ++v) {
    cout << isPrime[v] << ' ';
  }
  cout << endl;

  return 0;
}
