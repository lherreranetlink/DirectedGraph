#include "Graph.h"

int main() {
    Graph g;
    char* tagA = "A", *tagB = "B", *tagC = "C", *tagD = "D", *tagE = "E", *tagF = "F";
    initializeGraph(&g);
    generateVertex(&g, tagA);
    generateVertex(&g, tagB);
    generateVertex(&g, tagC);
    generateVertex(&g, tagD);
    generateVertex(&g, tagE);
    generateVertex(&g, tagF);

    generateEdge(&g, tagA, tagB, 5);
    generateEdge(&g, tagA, tagC, 3);

    printGraph(&g);
    return 0;
}
