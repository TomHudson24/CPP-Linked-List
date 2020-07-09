#include <iostream>
#include "LinkedList.h"
#include <vector>
#include <list>

/*
Implementing a basic linked list, user defines the size of the linked list then all elements
are printed to the console and finally the size of the linked list is printed to the console.
*/

int main() {
	std::cout << "How big do you want the linked list to be? ";
	long int size = 0;
	std::cin >> size;
	//std::vector<int> listOfData(5); //For debugging, ideally don't want to use an array, sticking to just one data structure.
	LinkedList linkedList(1); //give a head data to initialize correctly
	linkedList.deleteSpecifiedValue(1);//remove that so the user doesn't see incorrect data
	std::cout << "What values do you want to be in the linked list?\n";
	for (long int i = 0; i < size; i++) //allow the user to input data
	{
		long int temp = 0;
		std::cin >> temp;
		linkedList.append(temp);

	}

	linkedList.displayList();
	//std::cout << "\nAdding new head node...\n";
	//linkedList.prepend(6);
	//linkedList.displayList();
	std::cout << "\nSize of Linked List: " << linkedList.sizeOfList() << std::endl;

	
	return 0;
}