/** \file Main File */

#include "my_std.h"
#include <cstring>

/**
 * \brief struct
 */
struct List
{
	int x = 0;
};

/**
 * \brief struct2
 */
struct Lid
{
	vector<List*> v;

	const List* GetItem(int n) const
	{
		return v[n];
	}
};

/**
 * \brief Main function
 */
int main()
{
	Lid lid;
	int i = 1;
	lid.v.push_back(new List{i++});
	lid.v.push_back(new List{i++});
	lid.v.push_back(new List{i++});

	lid.v[1]->x = 42;

	const List* ptr = new List{3};
	const List* ptr2 = lid.GetItem(1);
	// ptr2->x = 3;

	// p(lid.GetItem(1));

	for (auto l : lid.v)
		p(l->x);

	std::cout << "HELLO!\n";
}
