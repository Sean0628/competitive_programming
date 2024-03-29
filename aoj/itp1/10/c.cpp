#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;

    vector<double> s(n);

    double ave = 0;
    rep(i, n) {
      cin >> s[i];
      ave += s[i];
    }
    ave /= n;

    double ans = 0;
    rep(i, n) ans += pow((s[i] - ave), 2);
    ans /= n;

    cout << fixed << setprecision(8);
    cout << sqrt(ans) << endl;
  }

  return 0;
}
