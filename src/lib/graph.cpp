#include "settings.h"

graph::graph() : vertexNum(0), edgeNum(0) {}

int graph::addVertex() {
	V[vertexId] = new vertex(vertexId); 
	vertexId++;
	vertexNum++;
	return vertexNum - 1;
}

void graph::delVertex(int id) {
	delete V[id];
	vertexCount--;
}

void graph::addEdge(int fromVertex, int toVertex, int length) {
	E[edgeId] = new edge(edgeId, fromVertex, toVertex, length);
	edgeId++;
	edgeNum++;
	return edgeId - 1;
}

void graph::deleteEdge(int id) {
	delete E[id];
	edgeCount--;
}
