#ifndef EDGELIST_H_INCLUDED
#define EDGELIST_H_INCLUDED
#include "EdgeNode.h"

typedef struct EdgeList {
    struct EdgeNode* header;
    struct EdgeNode* last;
    int listSize;
} EdgeList;


#endif // EDGELIST_H_INCLUDED
