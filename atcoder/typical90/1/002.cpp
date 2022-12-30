#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

bool judge(string s) {
  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] == '(') cnt++;
    else cnt--;

    if (cnt < 0) return false;
  }

  if (cnt == 0) return true;
  else return false;
}

int main() {
  int n; cin >> n;

  rep(i, 1<<n) {
    string s = "";
    for (int j = n - 1; j >=0; --j) {
      if (i>>j&1) s += ")";
      else s += "(";
    }

    if (judge(s)) cout << s << endl;
  }
  return 0;
}
