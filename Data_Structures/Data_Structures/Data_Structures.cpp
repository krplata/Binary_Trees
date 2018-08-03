// Data_Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "include\Bst.h"
#include "vld.h"
#include <iostream>

int main()
{
	Bst bst{ Bst() };

	Bst& my_tree{ bst };

	my_tree.insert(10);
	my_tree.insert(7);
	my_tree.insert(15);
	my_tree.insert(9);
	my_tree.insert(8);
	my_tree.insert(11);
	my_tree.insert(12);

	std::string output{ std::string() };

	std::cout << my_tree.inorder(my_tree.get_root(), output);
	system("pause");
	

    return 0;
}

