#include <bits/stdc++.h>

using namespace std;

int main() {
  char c;

  while ((c = getchar()) != EOF) {
    if (isupper(c))
      printf("%c", tolower(c));
    else
      printf("%c", toupper(c));
  }

  return 0;
}
