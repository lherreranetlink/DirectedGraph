#include "Graph.h"

void initializeGraph(Graph* g) {
    VertexList* vertexList = malloc(sizeof(VertexList));
    g->vertexList = vertexList;
    initializeVertexList(g->vertexList);
}

void generateVertex(Graph* g, char* tag) {
    VertexNode* newVertex = malloc(sizeof(VertexNode));
    initializeVertexNode(newVertex);
    newVertex->tag = tag;
    insertVertex(g, newVertex);
}

void insertVertex(Graph *g, VertexNode *node) {
    insertLast(g->vertexList, node);
}

int generateEdge(Graph *g, char* originTag, char* destinyTag, int weight) {
    VertexNode* originNode, *destinyNode;
    originNode = findVertexByTag(g, originTag);
    destinyNode = findVertexByTag(g, destinyTag);

    if (originNode == NULL || destinyNode == NULL)
        return 0;

    EdgeNode* edgeToInsert = malloc(sizeof(EdgeNode));
    initializeEdgeNode(edgeToInsert);
    edgeToInsert->destiny = destinyNode;
    edgeToInsert->weight = weight;

    EdgeList* originEdgeList = originNode->edgeList;

    if (originEdgeList == NULL) {
        originEdgeList = malloc(sizeof(EdgeList));
        initializeEdgeList(originEdgeList);
        originNode->edgeList = originEdgeList;
    }

    edgeListInsertSort(originEdgeList, edgeToInsert);
    return 1;
}

VertexNode* findVertexByTag(Graph *g, char* tag) {
    VertexList* vertexList = g->vertexList;
    if (vertexList->listSize > 0) {
        VertexNode *aux = vertexList->header;
        while (aux != NULL) {
            if (strcmp(aux->tag, tag) == 0) {
                return aux;
            }
            aux = aux->next;
        }
    }
    return NULL;
}

void printGraph(Graph *g) {
    printList(g->vertexList);
}
