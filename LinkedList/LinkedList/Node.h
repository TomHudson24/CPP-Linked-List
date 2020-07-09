#pragma once
class Node
{
	
public:
	Node* next = nullptr;//next object if there isn't one it should be null
	long int data; //what is the value inside the object?
	Node(long int data, Node* next = nullptr);//the node object itself
	Node() = default;
};

