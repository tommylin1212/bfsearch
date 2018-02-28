#include "frontier.h"
using namespace std;

Frontier::Frontier() {
	type = LIFO;
}

Frontier::~Frontier() {
	int size = fnodes.size();
	for (int i = 0; i < size; i++) {
		delete fnodes[size - i - 1];
	}
}

bool Frontier::add(Node * p) {
	fnodes.push_back(p);
	return false;
}

bool Frontier::check(Node * p) {
	for (int i = 0; i < fnodes.size(); i++) {
		if (p == fnodes[i])return true;
	}
	return false;
}

bool Frontier::isEmpty() {
	return fnodes.empty();
}

Node * Frontier::next() {
	if (type) {
		Node * temp = fnodes.back();//fifo
		fnodes.pop_back();
		return temp;
	}
	else {
		Node * temp = fnodes.front();
		fnodes.pop_front();
		return temp;
	}
}

void Frontier::setType(FrontierType f) {
	type = f;
}

void Frontier::print() const {
	for (int i = 0; i < fnodes.size(); i++) {
		fnodes[i]->print();
	}
}