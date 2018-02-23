#ifndef FRONTIER_H
#define FRONTIER_H

#include "node.h"
#include <deque>

enum FrontierType { LIFO, FIFO };

typedef std::deque<Node*> FrontierList;

class Frontier {
public:
	Frontier();
	~Frontier();
	bool add(Node*);
	bool check(Node*);
	bool isEmpty();
	Node* next();
	void setType(FrontierType);
	void print() const;
private:
	FrontierType type;
	FrontierList fnodes;
};

#endif
