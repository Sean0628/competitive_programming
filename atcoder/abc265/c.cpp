#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<string> g(h);

  rep(i, h) cin >> g[i];

  set<P> st;

  int hi = 0, wi = 0;
  while (true) {
    st.insert(make_pair(hi, wi));
    if (g[hi][wi] == 'U') {
      if (hi == 0) {
        cout << hi+1 << " " << wi+1 << endl;
        return 0;
      } else {
        hi -= 1;
      }
    } else if (g[hi][wi] == 'D') {
      if (hi == h-1) {
        cout << hi+1 << " " << wi+1 << endl;
        return 0;
      } else {
        hi += 1;
      }
    } else if (g[hi][wi] == 'L') {
      if (wi == 0) {
        cout << hi+1 << " " << wi+1 << endl;
        return 0;
      } else {
        wi -= 1;
      }
    } else if (g[hi][wi] == 'R') {
      if (wi == w-1) {
        cout << hi+1 << " " << wi+1 << endl;
        return 0;
      } else {
        wi += 1;
      }
    }

    if (st.find(make_pair(hi, wi)) != st.end()) {
      cout << -1 << endl;
      return 0;
    }
  }

  return 0;
}
