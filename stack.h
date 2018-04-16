//---------------------------------------------------------------------
// Name: 
// Email: @psu.edu
// Class: CMPSC 122, Section 3
// Program 4.1 - Stack include file
//
// Description: Contains List and Stack implementations from
// class notes.
//
//---------------------------------------------------------------------

class ListNode
{
private: 
	int data;
	ListNode* prev;
	ListNode* next;

public:
	ListNode() { prev = next = NULL; }
	ListNode(int d, ListNode* p, ListNode* n) { data = d; prev = p; next = n; }

	friend class List;
};

class List
{
private:
	ListNode* list_head;
	ListNode* list_tail;

public:
	List() { list_head = list_tail = NULL; }
	~List() { clear(); }

	bool isEmpty() { return list_head == NULL; }
	bool contains(int value);

	void addToHead(int value);
	void addToTail(int value);

	int head() { return list_head->data; }
	int tail() { return list_tail->data; }

	int removeHead();
	int removeTail();
	void clear();
};

bool List::contains(int value)
{
	ListNode *temp = list_head;
	while (temp != NULL && temp->data != value)
		temp = temp->next;

	return temp != NULL;
}

void List::addToHead(int value)
{
	if (isEmpty())
	{
		list_head = list_tail = new ListNode(value, NULL, NULL);
	}
	else
	{
		list_head = new ListNode(value, NULL, list_head);
		list_head->next->prev = list_head;	
	}
}

void List::addToTail(int value)
{
	if (isEmpty())
	{
		list_head = list_tail = new ListNode(value, NULL, NULL);
	}
	else
	{
		list_tail = new ListNode(value, list_tail, NULL);
		list_tail->prev->next = list_tail;
	}
}

int List::removeHead()
{
	int value = list_head->data;
	if (list_head == list_tail)
	{
		delete list_tail;
		list_head = list_tail = NULL;
	}
	else
	{
		list_head = list_head->next;
		delete list_head->prev;
		list_head->prev = NULL;
	}

	return value;
}

int List::removeTail()
{
	int value = list_head->data;
	if (list_head == list_tail)
	{
		delete list_tail;
		list_head = list_tail = NULL;
	}
	else
	{
		list_tail = list_tail->prev;
		delete list_tail->next;
		list_tail->next = NULL;
	}

	return value;
}

void List::clear()
{
	while (!isEmpty())
		removeTail();
}

class Stack
{
private:
	List* list;
public:
	Stack() { list = new List(); }
	~Stack() { delete list;	}

	bool isEmpty() { return list->isEmpty(); }
	void clear() { list->clear(); }
	void push(int data) { list->addToHead(data); }
	int pop() { return list->removeHead(); }
	int top() { return list->head(); }
};
