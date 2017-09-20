#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED
#include "VertexList.h"

void initializeVertexList(VertexList*);
void insertBegin(VertexList*, VertexNode*);
void insertFirst(VertexList*, VertexNode*);
void insertLast(VertexList*, VertexNode*);
void printList(VertexList*);

#endif // UTILS_H_INCLUDED
