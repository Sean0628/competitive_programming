#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  stack<int> lp;
  string s; cin >> s;
  rep(i, s.size()) {
    if (s[i] == '(') lp.push(i);
    else {
      cout << lp.top()+1 << " " << i+1 << endl;
      lp.pop();
    }
  }
  return 0;
}
