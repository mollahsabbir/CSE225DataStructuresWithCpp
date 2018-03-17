#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED

#include<iostream>

using namespace std;

const int MAX_ITEMS = 5;

enum RelationType { LESS, GREATER, EQUAL };

class ItemType
{
public:
	ItemType();
	RelationType comparedTo(ItemType);
	void print();
	void initialize(int);
	int getValue();
private:
	int value;
};


#endif // ITEMTYPE_H_INCLUDED
