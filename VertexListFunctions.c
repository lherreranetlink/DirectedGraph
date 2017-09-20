#include "VertexListFunctions.h"

void initializeVertexList(VertexList* list) {
    list->header = NULL;
    list->last = NULL;
    list->listSize = 0;
}

void insertBegin(VertexList* list, VertexNode* node) {
    list->header = node;
    list->last = node;
    list->listSize++;
    list->last->next = NULL;
}

void insertFirst(VertexList* list, VertexNode* node) {
    if (list->listSize <= 0) {
        insertBegin(list, node);
    } else {
        node->next = list->header;
        list->header = node;
        list->listSize++;
        list->last->next = NULL;
    }
}

void insertLast(VertexList* list, VertexNode* node) {
    if (list->listSize <= 0) {
        insertBegin(list, node);
    } else {
        list->last->next = node;
        list->last = node;
        list->listSize++;
        list->last->next = NULL;
    }
}

void printList(VertexList* list) {
    VertexNode *aux = list->header;
    while (aux!= NULL) {
        printf("%s: -> ", aux->tag);
        EdgeList* auxEdgeList = aux->edgeList;
        if (auxEdgeList!= NULL) {
            EdgeNode* auxEdge = auxEdgeList->header;
            while (auxEdge != NULL) {
                printf("%s: %d -> ", auxEdge->destiny->tag, auxEdge->weight);
                auxEdge = auxEdge->next;
            }
        }
        printf("|\n");
        aux = aux->next;
    }
}
