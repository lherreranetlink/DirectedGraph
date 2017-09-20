#ifndef EDGENODE_H_INCLUDED
#define EDGENODE_H_INCLUDED
#include "VertexNode.h"

typedef struct EdgeNode {
    struct VertexNode* destiny;
    struct EdgeNode* next;
    int weight;
}EdgeNode;

void initializeEdgeNode(EdgeNode*);


#endif // EDGENODE_H_INCLUDED
