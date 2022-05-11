#include <bits/stdc++.h>
using namespace std;

int main() {

  string w;

  cin >> w;
  transform(w.begin(), w.end(), w.begin(), ::tolower);

  int cnt = 0;
  while (true) {
    string l;
    cin >> l;
    if (l == "END_OF_TEXT") break;
    transform(l.begin(), l.end(), l.begin(), ::tolower);

    if (l == w) cnt++;

  }

  cout << cnt << endl;
  return 0;
}
