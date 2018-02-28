#include "node.h"

using namespace std;

Node::Node() {
}

Node::Node(Node * p, std::string state, double cost) {
	if (p != NULL) {
		name = state;
		ucost = cost;
		pcost = p->pcost + cost;
	}
	else {
	
		name = state;
		pcost = 0;
		cost = 0;
	}
	parent=p;
}

string Node::getName() const {
	return name;
}

double Node::getcost() const {
	return ucost;
}

bool Node::operator==(const Node & n1) {
	return (name == n1.getName());
}

bool Node::operator<(const Node & n1) {
	return (ucost < n1.getcost());
}

void Node::print() const {
	cout << name;
}

void Node::traceBack(bool pc) {
	if (parent) {
		parent->traceBack(false);
		cout << "->";
	}
	cout << name;
	if (pc)cout << " total cost: " << pcost;
}
