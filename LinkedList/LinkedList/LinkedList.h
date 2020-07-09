#pragma once
#include "Node.h"
#include <iostream>
#include <list>
class LinkedList :
	public Node
{
	Node* head = nullptr; //head of the list
public:
	LinkedList(long int data = 0, Node* next = nullptr);
	//LinkedList() = default;
	void append(long int data); //append new data to the end of the list
	void prepend(long int data); //prepend new data to the head of the list
	void deleteSpecifiedValue(long int data); //pass through a value and when that data is found remove that node from the list
	void displayList();// print all objects as spaced integers
	int sizeOfList();
	
};

