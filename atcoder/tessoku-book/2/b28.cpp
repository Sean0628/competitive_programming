#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 1e9 + 7;

int main() {
  int n; cin >> n;

  auto fib = [](int a) {
    vector<int> fib(a+1);
    fib[1] = fib[2] = 1;

    for (int i = 3; i <= a; ++i) {
      fib[i] = (fib[i-1]%MOD + fib[i-2]%MOD)%MOD;
    }

    return fib[a];
  };

  cout << fib(n) << endl;
  return 0;
}
