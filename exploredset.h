#ifndef EXPLOREDSET_H
#define EXPLOREDSET_H

#include "node.h"
#include <vector>

typedef std::vector<Node*> ExploredNodes;

class ExploredSet {
public:
	ExploredSet();
	~ExploredSet();
	bool check(Node* n);
	bool add(Node* n);
	void print() const;
private:
	ExploredNodes exset;
};

#endif
