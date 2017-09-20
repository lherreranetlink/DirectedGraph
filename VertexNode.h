#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "EdgeList.h"

typedef struct VertexNode{
    struct VertexNode* next;
    struct EdgeList* edgeList;
    char* tag;
}VertexNode;

void initializeVertexNode(VertexNode*);

#endif // NODE_H_INCLUDED
