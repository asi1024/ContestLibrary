## CGL_2_A.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/src/CGL_2_A.cpp)

```cpp
Point input() {
  ld x, y;
  scanf("%Lf%Lf", &x, &y);
  return Point(x, y);
}

int main() {
  int q;
  scanf("%d", &q);
  while (q--) {
    Line l1(input(), input());
    Line l2(input(), input());
    if (!isis_ll(l1, l2)) puts("2");
    else if (abs(dot(l1.a - l1.b, l2.a - l2.b)) < eps) puts("1");
    else puts("0");
  }
  return 0;
}
```

- [Back](https://{{ site.github.owner_name }}.github.io/competitive-library)