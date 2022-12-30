#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, num;
  cin >> n;

  if (n >= 42) num = n + 1;
  else num = n;

  printf("AGC%03d", num);

  return 0;
}
