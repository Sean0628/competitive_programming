#include <iostream>

int calculate(int a, int b, int c, int x) {
  int total = 0;

  while (x > 0) {
    if (a > x) {
      total += x * b;
      x = 0;
    } else {
      total += a * b;
      x -= a + c;
    }
  }

  return total;
}

std::string evaluate(int a, int b) {
  if (a > b) {
    return "Takahashi";
  } else if (a < b) {
    return "Aoki";
  } else {
    return "Draw";
  }
}

int main() {
  int a, b, c, d, e, f, x;

  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  std::cin >> e;
  std::cin >> f;
  std::cin >> x;

  int t = calculate(a, b, c, x);
  int ao = calculate(d, e, f, x);

  std::cout << evaluate(t, ao) << std::endl;

  return 0;
}
