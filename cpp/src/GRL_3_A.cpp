#include "../include/graph/articulation_points.cpp"

int main() {
  int V, E, s, t;
  scanf("%d%d", &V, &E);
  Graph g(V);
  while (E--) {
    scanf("%d%d", &s, &t);
    add_edge(g, s, t);
  }
  set<int> art = ArticulationPoints(g).vertices();
  for (int i: art) printf("%d\n", i);
  return 0;
}
