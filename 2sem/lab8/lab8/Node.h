#pragma once
class Node
{
private:
	float value;
	Node* next;
public:
	Node(float num);
	void SetNext(Node* next);
	void SetValue(float num);
	Node* GetNext();
	float GetValue();
};

