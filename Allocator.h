#include "MemoryNode.h"
#include <list>

class Allocator
{
public:
	Allocator(); //need to call a MemoryNode constructor
	~Allocator();

	int* FirstFit();
	int* NextFit();
	int* BestFit();
	int* WorstFit();

	void CompactionBayker();
	void CompactionSimple();
private:
	list<MemoryNode> memList;
	size_t allocatorMemory;

	Allocator(const Allocator& other); //non construction-copyable
	Allocator& operator=(const Allocator&); //non copyable
};
