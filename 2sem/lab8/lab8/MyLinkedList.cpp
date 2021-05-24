#include "MyLinkedList.h"

MyLinkedList::MyLinkedList() {  // constructor
	head = nullptr;
}

Node* MyLinkedList::CreateNode(float num) {  // method for creating node
	Node* NewNode = new Node(num);
	return NewNode;
}

void MyLinkedList::AddNode(float num) {  // method for creating node and adding it to the end of list
	if (head == nullptr)
		head = CreateNode(num);
	else {
		Node* current = head;
		while (current->GetNext() != nullptr)
			current = current->GetNext();
		Node* newNode = CreateNode(num);
		current->SetNext(newNode);
	}
}

Node* MyLinkedList::GetHead() {  // head element getter
	return head;
}

void MyLinkedList::DeleteAllUnderNum(float num) {  // method for deleting all elements < num
	Node* current = head;
	Node* next = current->GetNext();

	if (current->GetValue() < num) {
		head = next;
		current = head;
		next = current->GetNext();
	}
		
	while (next != nullptr) {
		if (next->GetValue() < num) {
			current->SetNext(next->GetNext());
			next = current->GetNext();
		}
		else {
			current = current->GetNext();
			next = current->GetNext();
		}
	}
}