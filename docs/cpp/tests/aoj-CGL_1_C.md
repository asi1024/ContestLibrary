---
title: "aoj-CGL_1_C.cpp"
---

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/tests/aoj-CGL_1_C.cpp)

{% highlight cpp %}
#include "../include/geometry/Geometry.cpp"

using namespace std;

using P = Point<float11>;

int main() {
  P p0, p1, p2;
  cin >> p0 >> p1;
  int q;
  cin >> q;
  while (q--) {
    cin >> p2;
    int c = ccw(p0, p1, p2);
    switch (c) {
    case 1: puts("COUNTER_CLOCKWISE"); break;
    case -1: puts("CLOCKWISE"); break;
    case 2: puts("ONLINE_BACK"); break;
    case -2: puts("ONLINE_FRONT"); break;
    case 0: puts("ON_SEGMENT"); break;
    }
  }
  return 0;
}
{% endhighlight %}

### Includes

- [Geometry.cpp](../include/geometry/Geometry)

[Back](..)
