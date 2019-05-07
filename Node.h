/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The main file to run the program
*******************************************************************************/

#ifndef NODE_H
#define NODE_H

#include <iostream>
class Node
{
protected: 
	struct node
	{
		int val; 
		node* next = NULL; 
		node* prev = NULL;
		node(int in)
		{
			val = in; 
		};
	};
	



};


#endif // !LIST_H

