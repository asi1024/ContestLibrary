#include "../util.hpp"
#include "../../src/Structure/starry_sky_tree.cpp"

double test_starry_sky_tree() {
  StarrySkyTree<int> seg(array_len);
  vector<Query> query = random_query();
  Timer timer;
  for (auto q: query) {
    if (q.type) seg.add(q.left, q.right, q.value);
    else seg.minimum(q.left, q.right);
  }
  return timer.stop() / query_num;
}
