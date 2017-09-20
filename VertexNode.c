#include "VertexNode.h"

void initializeVertexNode(VertexNode* newNode) {
    newNode->next = NULL;
    newNode->edgeList = NULL;
    newNode->tag = "";
}
