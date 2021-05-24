#include "Node.h"

Node::Node(float num) {  // constructor
	value = num;
	next = nullptr;
}

void Node::SetNext(Node* next) {  // next element setter
	this->next = next;
}

void Node::SetValue(float num) {  // value setter
	value = num;
}

Node* Node::GetNext() {  // next element getter
	return next;
}

float Node::GetValue() {  // value getter
	return value;
}