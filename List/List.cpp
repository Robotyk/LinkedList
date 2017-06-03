#include "List.h"
void List::addHead(int node) {
	
	Node * tmp = new Node;
	tmp->data = node;
	tmp->next = this->First;
	this->First = tmp;

}
void List::print(int num)
{
	if (this->isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	int i = 0;
	Node * current = this->First;
	while (i < num && current->next != 0)
	{
		++i;
		current = current->next;
	}
	if (i == num)
	{
		cout << "Node number: " << i << " has value: " << current->data << endl;
		return;
	}
	cout << "Node number: " << i+1 << " does not exist." << endl;
	return;
}
void List::addTail(int node)
{
	Node * temp = new Node;
	temp->data = node;
	temp->next = nullptr;
	Node * current = this->First;
	if (current)
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = temp;
	}
	else
		this->First = temp;
}
void List::pop()
{
	if (this->isEmpty())
		return;
	Node * tmp = this->First->next;
	delete this->First;
	this->First = tmp;
}
bool List::isEmpty() {
	if (this->First == nullptr)
		return true;
	return false;
}
void List::clear()
{
	Node * temp = this->First;
	while (this->First)
	{
		temp = this->First->next;
		delete this->First;
		this->First = temp;
	}
}
int List::count() {
	int i = 0;
	Node * temp = this->First;
	while (temp)
	{
		++i;
		temp = temp->next;
	}
	return i;
}