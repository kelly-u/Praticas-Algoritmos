#include "graph.h"
#include "heap.h"

#include <queue>

using namespace std;

// Cria array do tipo T com tamanho "size" e inicializa com valor "def"
template<class T>
T* array(int size, T def) {
	T *arr = new T[size];
	for (int i = 0; i < size; i++)
		arr[i] = def;
	return arr;
}

Graph::Graph(int nVert) {
	this->nVert = nVert;
	this->adj = new list<Edge> [nVert];
}

Graph::~Graph() {
	delete[] adj;
}

int Graph::size() {
	return nVert;
}

// Cria��o da aresta src --> dst
void Graph::edge(int src, int dst, int w) {
	adj[src].push_back(Edge(src, dst, w));
}

int Graph::degree(int src) {
	return adj[src].size();
}

list<int> Graph::neighbors(int src) {
	list<int> result;
	for (Edge e : adj[src]) {
		result.push_back(e.dst);
	}
	return result;
}

int Graph::weight(int src, int dst) {

	for (Edge e : adj[src]) {
		if (e.dst == dst) {
			return e.weight;
		}
	}
	return -1;
}

void Graph::print() {
	for (int i = 0; i < this->size(); i++) {
		int d = this->degree(i);

		cout << i << "(" << d << "): ";

		list<int> nei = this->neighbors(i);
		for (int dst : nei) {
			int w = this->weight(i, dst);
			cout << dst << "[" << w << "]; ";
		}

		cout << endl;
	}
}

bool Graph::isConnected() {

	vector<int> group(nVert);

	for (int i = 0; i < nVert; i++) {
		group[i] = i;
	}

	for (int src = 0; src < nVert; src++) {
		for (Edge e : adj[src]) {
			int dst = e.dst;

			if (group[src] != group[dst]) {
				int srcGroup = group[src];
				int dstGroup = group[dst];

				for (int i = 0; i < nVert; i++) {
					if (group[i] == dstGroup) {
						group[i] = srcGroup;
					}
				}
			}
		}
	}
	
	int firstGroup = group[0];
	for(int i = 1; i < nVert; i++){
		if(group[i] != firstGroup){
			return false; // Não é conexo
		}
	}

return true; // É conexo
}

