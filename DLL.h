
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The header file for the DLL class
*******************************************************************************/


#include "Node.h"


class DLL : public Node
{
private:
	node* head = NULL;
	node* tail = NULL;
	node* n = NULL;


public:
	DLL();
	void addNodeHead(int);
	void addNodeTail(int);
	void delNodeHead();
	void delNodeTail(); 
	void printNodes();
	void printNodesRev(); 
	void revHead(node*); 
	~DLL();
};

