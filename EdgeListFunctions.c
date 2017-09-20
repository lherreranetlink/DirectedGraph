#include "EdgeListFunctions.h"

void initializeEdgeList(EdgeList* list) {
    list->header = NULL;
    list->last = NULL;
    list->listSize = 0;
}

void edgeListInsertBegin(EdgeList* list, EdgeNode* node) {
    list->header = node;
    list->last = node;
    list->listSize++;
    list->last->next = NULL;
}

void edgeListInsertFirst(EdgeList* list, EdgeNode* node) {
    if (list->listSize <= 0) {
        edgeListInsertBegin(list, node);
    } else {
        node->next = list->header;
        list->header = node;
        list->listSize++;
        list->last->next = NULL;
    }
}

void edgeListInsertLast(EdgeList* list, EdgeNode* node) {
    if (list->listSize <= 0) {
        edgeListInsertBegin(list, node);
    } else {
        list->last->next = node;
        list->last = node;
        list->listSize++;
        list->last->next = NULL;
    }
}

void edgeListInsertSort(EdgeList* list, EdgeNode* node) {
    if (list->listSize > 0) {
        EdgeNode* aux = list->header;
        EdgeNode* prev = list->header;
        while (aux != NULL) {
            if (aux->weight > node->weight) {
                if (prev == aux) {
                    edgeListInsertFirst(list, node);
                    break;
                } else {
                    node->next = aux;
                    prev->next = node;
                    list->listSize++;
                    if (aux->next == NULL) {
                        list->last = aux;
                        list->last->next = NULL;
                    }
                    break;
                }
            }
            if (aux->next == NULL) {
                edgeListInsertLast(list, node);
            }
            prev = aux;
            aux = aux->next;
        }
    } else {
        edgeListInsertBegin(list, node);
    }
}

void printEdgeList(EdgeList *list) {
    if (list->listSize > 0) {
        EdgeNode *aux = list->header;
        while(aux != NULL) {
            printf("%s: %d ->", aux->destiny->tag, aux->weight);
            aux = aux->next;
        }
    }
}
