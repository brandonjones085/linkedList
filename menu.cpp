/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The menu function returns in int from the user which is used to run the program
*******************************************************************************/


#include "menu.h"
#include "validateMenu.h"
#include <iostream>

int menu()
{
	int choice; 
	std::cout << "\nWould you like to...\n\n"; 
	std::cout << "1. Add a new node to the head\n"; 
	std::cout << "2. Add a new node to the tail\n"; 
	std::cout << "3. Delete the first node in the list\n";
	std::cout << "4. Delete the last node in the list\n";
	std::cout << "5. Traverse the list reversely\n";
	std::cout << "6. Create list from txt file\n";
	std::cout << "7. Exit\n\n";

	std::cin >> choice; 
	validateMenu(choice); 


	return choice; 

}
