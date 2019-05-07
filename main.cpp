/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/24/2019
** Description:  The main file to run the program
*******************************************************************************/


#include "DLL.h"
#include "menu.h"
#include <cstdlib>
#include <iostream>




int main()
{

	DLL d; 
	
	std::cout << "\nWelcome to linked-list\n\n";

	int num = menu(); 

	while (num != 6) {

		if (num == 1)
		{

			int in;
			//add to tail
			std::cout << "\nWhat number would you like to add: ";
			std::cin >> in;
			//add to head
			d.addNodeHead(in);
			d.printNodes();

			num = menu(); 

		}
		else if (num == 2)
		{
			int in;
			//add to tail
			std::cout << "\nWhat number would you like to add: ";
			std::cin >> in;


			d.addNodeTail(in);
			d.printNodes();

			num = menu();
		}
		else if (num == 3)
		{
			//del first node

			d.delNodeHead(); 
			d.printNodes();

			num = menu();

		}
		else if (num == 4)
		{
			//del last node
			d.delNodeTail(); 
			d.printNodes();

			num = menu();
		}
		else if (num == 5)
		{
			//print node reversely

			d.printNodesRev(); 
			num = menu();
		}



	}

	std::cout << "\n\nGoodbye\n"; 

	return 0; 
	
}

