#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "EdgeListFunctions.h"
#include "VertexListFunctions.h"
#include <string.h>

typedef struct Graph{
    struct VertexList *vertexList;
}Graph;

void initializeGraph(Graph*);
void generateVertex(Graph*, char*);
void printGraph(Graph*);
void insertVertex(Graph*, VertexNode*);
int generateEdge(Graph*, char*, char*, int);
VertexNode* findVertexByTag(Graph *, char*);

#endif // GRAPH_H_INCLUDED
