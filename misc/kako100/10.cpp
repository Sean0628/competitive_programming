#include <vector>
#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<int> a(n); rep(i, n) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m); rep(i, m) cin >> b[i];

  set<int> st;
  rep(i, 1<<n) {
    int sum = 0;
    rep(j, n) {
      if (i>>j&1) sum += a[j];
    }

    st.insert(sum);
  }

  rep(i, m) {
    if (st.count(b[i])) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}
