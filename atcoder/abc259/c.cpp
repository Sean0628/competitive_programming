#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<char, int>;

int main() {
  string s,t; cin >> s >> t;
  vector<P> scnt, tcnt;

  rep(i, s.size()) {
    if (scnt.empty()) scnt.push_back(make_pair(s[i], 1));
    else if (scnt[scnt.size()-1].first != s[i]) scnt.push_back(make_pair(s[i], 1));
    else scnt[scnt.size()-1].second++;
  }

  rep(i, t.size()) {
    if (tcnt.empty()) tcnt.push_back(make_pair(t[i], 1));
    else if (tcnt[tcnt.size()-1].first != t[i]) tcnt.push_back(make_pair(t[i], 1));
    else tcnt[tcnt.size()-1].second++;
  }

  if (scnt.size() != tcnt.size()) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, scnt.size()) {
    if (scnt[i].first == tcnt[i].first
        && ((scnt[i].second == 1 && tcnt[i].second == 1) || (scnt[i].second > 1 && tcnt[i].second > 1))
        && scnt[i].second <= tcnt[i].second) {
      continue;
    }

    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}
