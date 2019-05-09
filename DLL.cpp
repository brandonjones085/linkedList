/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The DLL class will build a double linked list. 
*******************************************************************************/


#include "DLL.h"

DLL::DLL()
{
	head = NULL; 
	tail = NULL; 

}


/*******************************************************************************
** Description:  Takes in an int and adds it to the tail of the linked list
*******************************************************************************/
void DLL::addNodeTail(int input)
{
	//If list is empty
	if (head == NULL)
	{
		head = new node(input);
		setNodeHead(head);
		setNodeTail(head);
	}
	else
	{
		node *ptr = head; 
		while (ptr->next != NULL)
		{
			ptr = ptr->next; 

		}
		ptr->next = new node(input); 

		setNodeTail(ptr->next);
	}

	
}


/*******************************************************************************
** Description:  Takes in an int and adds a node to the beginning of linked list
//Source: https://stackoverflow.com/questions/19194224/adding-node-to-the-front-of-a-linked-list
*******************************************************************************/
void DLL::addNodeHead(int input)
{
	//If list is empty
	if (head == NULL)
	{
		head = new node(input);
	}
	else
	{
		node* temp = new node(input); 
		temp->next = head; 
		head = temp; 
	}

	setNodeHead(head); 

	if (tail == NULL)
	{
		setNodeTail(head);
	}

}


/*******************************************************************************
** Description:  Takes in an int and adds a node to the beginning of linked list
//Source: https://stackoverflow.com/questions/28907154/removing-the-head-node-of-my-linked-list-c
*******************************************************************************/
void DLL::delNodeHead()
{
	//If list is empty
	if (head == NULL)
	{
		std::cout << "\nThe node cannot be deleted\n\n";
	}
	else
	{
		node *temp = head->next;
		delete head;
		head = temp;
		setNodeHead(head);
	}


}

/*******************************************************************************
** Description:  Takes in an int and adds a node to the beginning of linked list
//Source:https://stackoverflow.com/questions/33249301/delete-last-node-from-single-linked-list
*******************************************************************************/
void DLL::delNodeTail()
{
	//If list is empty
	if (head == NULL)
	{
		std::cout << "\n\nNode cannot be deleted\n"; 
	}

	//If there's only one value in the list
	else if(head->next == NULL)
	{
		node *temp = head; 
		delete temp; 
		head = NULL; 
		tail = NULL;
		setNodeHead(head); 
		setNodeTail(tail); 

	}
	else
	{
		node *temp1 = head; 
		node *temp2 = head->next; 
		while (temp2->next != NULL)
		{
			temp2 = temp2->next; 
			temp1 = temp1->next; 
		}
		temp1->next = NULL; 

		setNodeTail(temp1);
		delete temp2; 

		
	}

}

/*******************************************************************************
** Description:  Prints all the nodes in the linked list
*******************************************************************************/
void DLL::printNodes()
{
	node* temp = head;

	while (temp != NULL)
	{
		std::cout << temp->val << " ";
		temp = temp->next; 
	}

}


/*******************************************************************************
** Description:  Runs the revHead() function and is called in the main file
//Source: https://stackoverflow.com/questions/14177337/printing-my-linked-list-in-reverse-order-in-c
*******************************************************************************/

void DLL::printNodesRev()
{
	revHead(head); 
}

/*******************************************************************************
** Description:  Uses recursion to print the linked list in reverse
//Source: https://stackoverflow.com/questions/14177337/printing-my-linked-list-in-reverse-order-in-c
*******************************************************************************/
void DLL::revHead(node *h)
{
	if (h)
	{
		revHead(h->next);
		std::cout << h->val << " "; 
	}
}

/*******************************************************************************
** Description:  Deletes the linked list when the program is finished. 
//Source: https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/
*******************************************************************************/
DLL::~DLL()
{
	node* temp = head; 
	node* next; 

	while (temp != NULL)
	{
		next = temp->next; 
		delete temp; 
		temp = next; 
	}

}

void DLL::setNodeHead(node* i)
{
	if (i != NULL)
	{
		head = i; 
	}
}


void DLL::setNodeTail(node* i)
{
	if (i != NULL)
	{
		tail = i; 
	}
}

int DLL::getNodeHead()
{
	return head->val; 
}

int DLL::getNodeTail()
{
	return tail->val; 
}