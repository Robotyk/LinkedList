#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};

class List
{
public:
	Node *First;
	List() { First = nullptr; };
	~List() {this->clear();};
	void print(int num);
	void addHead(int node);
	void addTail(int node);
	bool isEmpty();
	void pop();
	void clear();
	int count();
};

