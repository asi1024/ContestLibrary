{% include mathjax.html %}



## Implementation

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/include/structure/monoid.hpp)

{% highlight cpp %}
#include "../template/includes.hpp"
#include "../template/const_value.hpp"

template<typename T>
struct RMQ {
  using value_type = T;
  static value_type id() { return inf<value_type>; }
  static value_type op(const value_type &l, const value_type &r) {
    return std::min(l, r);
  }
};
{% endhighlight %}

### Includes

- [includes.hpp](../template/includes)
- [const_value.hpp](../template/const_value)

[Back](../..)