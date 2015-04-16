#ifndef GRAPH_H
#define GRAPH_H 
#include "settings.h"
class graph {
	vertex *V;
	edge *E;
	int vertexId;
	int edgeId;
	int vertexCount;
	int edgeCount; 
public:
	graph();
	~graph();
	int addVertex(); //return id;
	//void setVertex(/*...*/); 
	void delVertex(int id);
	void addEdge(int fromVertex, int toVertex, int length /*... optional ...*/);
	//void setEdge(/*...*/);
	void deleteEdge(int id);
}
#endif
