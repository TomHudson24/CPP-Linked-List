#include "LinkedList.h"

LinkedList::LinkedList(long int data, Node* next)
{
	LinkedList::data = data;
	LinkedList::next = next;
	if (head == nullptr) //if there is no head
	{
		head = new Node(data);
		return;
	}
}

void LinkedList::append(long int data)
{
	if (head == nullptr) //if there is no head
	{
		head = new Node(data);
		return;
	}
	Node* current = head;
	while (current->next != nullptr) //walk through the linked list
	{
		current = current->next;
	}
	current->next = new Node(data);
}

void LinkedList::prepend(long int data) //add a new head to the start of the linked list
{
	Node* newHead = new Node(data);
	newHead->next = head;
	head = newHead;
}

void LinkedList::deleteSpecifiedValue(long int data)
{
	if (head == nullptr) return; //if there is no head, there is no data to remove
	if(head->data == data) //if the head data is the head we want to delete then do this
	{
		head = head->next;
		return;
	}
	Node* current = head;
	while(current->next != nullptr) //go through the list
	{
		if(current->next->data == data) //when at the point before the node we want to delete
		{
			current->next == current->next->next; //remove any reference to that node by making the next next node the next node instead
			return;
		}
		current = current->next; //in all other cases keep marching through the list
	}
}

void LinkedList::displayList()
{
	Node* ptr = head; // both of them begin from front Node list
	if (!head) // if it is empty
		return;
	while (ptr != nullptr) // while it is not empty
	{
		std::cout << ptr->data << " ";  // ptr->next means (*ptr or printing the value)
		ptr = ptr->next;
	}
}

int LinkedList::sizeOfList()
{
	Node* ptr = head;
	long int len = 0;
	if (head == nullptr) // if it empty print 0
		return len;
	else
	{
		while (ptr->next != nullptr)
		{
			len++;
			ptr = ptr->next;
		}
		return len + 1;
	}
}
