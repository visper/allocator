#include <iostream>
#include <list>

using namespace std;

class MemoryNode
{
public:
	MemoryNode();
//	MemoryNode();

	~MemoryNode();

private:
	MemoryNode* prev;
	MemoryNode* next;
	size_t      piceSize; // size of pointed memory
	bool        validBit; // 1 - mem is alloc, 0 - mem is free

	MemoryNode(const MemoryNode& other); //non construction-copyable
	MemoryNode& operator=(const MemoryNode&); //non copyable
};
