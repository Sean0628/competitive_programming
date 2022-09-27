#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<int> get_primes(int n) {
  vector<int> isPrime(n+1, true);
  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i*i <= n; ++i) {
    for (int j = i * 2; j <= n; j += i) {
      isPrime[j] = false;
    }
  }

  return isPrime;
}

int main() {
  int n; cin >> n;
  vector<int> isPrime = get_primes(n);

  int cnt = 0;
  for (int i = 0; i <= n; ++i ) {
    if (isPrime[i]) cout << i << endl;
  }
  return 0;
}
