#include "../include/structure/monoid.cpp"
#include "../include/structure/segment_tree_lazy.cpp"

struct RangeUpdateRMQ {
  using Monoid = RMQ<long long>;
  using Update = RightHandSide<long long>;
  using value_type = typename Monoid::value_type;
  using update_type = typename Update::value_type;
  static value_type evaluate(const value_type &x, const update_type &update) {
    return update.first ? update.second : x;
  }
};

int main() {
  int n, q, com, s, t, x;
  scanf("%d%d", &n, &q);
  SegmentTreeLazy<RangeUpdateRMQ> seg(n, INT_MAX);
  while (q--) {
    scanf("%d", &com);
    if (com) {
      scanf("%d%d", &s, &t);
      printf("%lld\n", seg.query(s, t + 1));
    }
    else {
      scanf("%d%d%d", &s, &t, &x);
      seg.update(s, t + 1, std::make_pair(true, x));
    }
  }
  return 0;
}
