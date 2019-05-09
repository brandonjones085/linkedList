/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The header file for the Node class
*******************************************************************************/

#ifndef NODE_HPP
#define NODE_HPP

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

