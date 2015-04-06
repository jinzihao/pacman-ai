class graph {
	vertex **V;
	edge **E;
	int vertexNum;
	int edgeNum;
public:
	graph();
	~graph();
	void addVertex(/*... optional ...*/);
	void setVertex(/*...*/);
	void addEdge(vertex *from, vertex *to, /*... optional ...*/);
	void setEdge(/*...*/);
}

class vertex {
	/*
	attributes
	*/
public:
	vertex();
	~vertex();
}

class edge {
	vertex* from;
	vertex* to;
	/*
	attributes
	*/
public:
	edge();
	~edge();	
}
