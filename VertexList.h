#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "VertexNode.h"

typedef struct VertexList {
    struct VertexNode* header;
    struct VertexNode* last;
    int listSize;
} VertexList;

#endif // LIST_H_INCLUDED
