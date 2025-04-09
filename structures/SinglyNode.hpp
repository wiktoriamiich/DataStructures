#include "structures/SinglyLinkedList.hpp"

template <class T>
class SinglyNode
{
	T value;
	T* next;

	friend class SinglyLinkedList;
};