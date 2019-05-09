
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The header file for the DLL class which inherits from the Node class
*******************************************************************************/


#include "Node.h"

#ifndef DLL_HPP
#define DLL_HPP

class DLL : public Node
{
private:
	node* head = NULL;
	node* tail = NULL;
	node* n = NULL;
	int nodeTail; 
	int nodeHead; 


public:
	DLL();
	void addNodeHead(int);
	void addNodeTail(int);
	void delNodeHead();
	void delNodeTail(); 
	void printNodes();
	void printNodesRev(); 
	void setNodeTail(node*); 
	int getNodeTail(); 
	void setNodeHead(node*); 
	int getNodeHead(); 
	void revHead(node*); 
	~DLL();
};

#endif // !DLL_HPP