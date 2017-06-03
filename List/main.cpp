#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List list;
	list.addHead(5);
	list.addHead(4);
	list.addHead(3);
	list.addHead(2);
	list.addHead(1);
	list.addHead(0);
	list.pop();
	list.print(0);
	list.print(1);
	list.print(2);
	list.print(3);
	list.print(4);
	list.print(5);
	cout << list.isEmpty() << endl << list.count() << endl;
	list.clear();
	system("pause");
}