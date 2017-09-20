#ifndef EDGELISTFUNCTIONS_H_INCLUDED
#define EDGELISTFUNCTIONS_H_INCLUDED
#include "EdgeList.h"

void initializeEdgeList(EdgeList*);
void edgeLastInsertBegin(EdgeList*, EdgeNode*);
void edgeListInsertFirst(EdgeList*, EdgeNode*);
void edgeListInsertLast(EdgeList*, EdgeNode*);
void edgeListInsertSort(EdgeList*, EdgeNode*);
void printEdgeList(EdgeList*);

#endif // EDGELISTFUNCTIONS_H_INCLUDED
