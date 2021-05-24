#pragma once
#include "Node.h"

class MyLinkedList
{
private:
	Node* head;
public:
	MyLinkedList();
	Node* CreateNode(float num);
	void AddNode(float num);
	Node* GetHead();
	void DeleteAllUnderNum(float num);
};

