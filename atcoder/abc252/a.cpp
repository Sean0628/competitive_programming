#include <bits/stdc++.h>
using namespace std;

vector<char> a = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

int main() {
  int n;
  cin >> n;

  n -= 97;
  cout << a[n] << endl;

  return 0;
}
