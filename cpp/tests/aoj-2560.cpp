#include "../include/math/fmt.cpp"

using namespace std;

using Mod = Modulo<998244353, true>;

int main() {
  int n, c;
  scanf("%d", &n);
  vector<Mod> x(n * n * 2);
  int zero = 0;
  ld sum = 0, cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &c);
      x[2 * i * n + j] = c;
      zero += c * (c - 1) / 2;
    }
  }
  map<int, ll> count;
  if (zero > 0) {
    cnt = zero;
    count[0] = zero;
  }
  vector<Mod> y = x;
  reverse(begin(y), end(y));
  auto res = convolution<3>(x, y);
  for (int i = 0; i < n; ++i) {
    for (int j = -n + 1; j < n; ++j) {
      if (i == 0 && j <= 0) continue;
      const int d = int(res[2 * n * n - 1 + 2 * i * n + j]);
      if (d > 0) count[i * i + j * j] += d;
      cnt += d;
      sum += sqrt(ld(i * i + j * j)) * d;
    }
  }
  printf("%.9Lf\n", sum / cnt);
  int line = 0;
  for (auto p : count) {
    printf("%d %lld\n", p.first, p.second);
    ++line;
    if (line >= 10000) break;
  }
  return 0;
}
