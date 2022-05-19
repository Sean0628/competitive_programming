#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<string> w = { "dream", "dreamer", "erase", "eraser" };

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());
  rep(i, w.size()) reverse(w[i].begin(), w[i].end());

  bool v = true;
  for (int i = 0; i < s.size();) {
    bool sv = false;
    rep(j, w.size()) {
      string word = w[j];
      if (s.substr(i, word.size()) == word) {
        sv = true;
        i += word.size();
      }
    }
    if (!sv) {
      v = false;
      break;
    }
  }

  if (v) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
