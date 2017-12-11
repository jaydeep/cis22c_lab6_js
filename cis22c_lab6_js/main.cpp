/*
Lab 6 - Makeup Lab
Hashtables with open addressing
and quadratic probing
Written By: Jaydeep Singh
Professor : Manish Goel
Date	  : Dec 10, 2017
*/
#include <string>
#include <iostream>
#include <fstream>
#include "hashtable.h"

int main() {
	std::string filePath, tempInput, VIN, make, model, year;
	std::size_t found;
	MyNode<std::string> *tempNode;
	int size = 0;
	std::ifstream inputFile;
	char menuInput;

	std::cout << "Welcome to the BMW of Stevens Creek!" << std::endl;
	std::cout << "Please enter the full file path that contains the 25+ records of cars." << std::endl;
	std::cout << "One record per line and each line would have VIN, make, model and year of the car." << std::endl;
	std::cout << "Enter file path here: ";

	std::getline(std::cin, filePath);
	inputFile.open(filePath);

	while (!inputFile) //file input validation
	{
		std::cout << "Sorry, I could not find that file." << std::endl;
		std::cout << "Please enter the full file path of the data " << std::endl;
		std::cout << "you wish to save: ";
		std::getline(std::cin, filePath);
		inputFile.open(filePath);
	}

	//read file to get size of hashtable
	while (std::getline(inputFile, tempInput))
	{
		size = size + 1;
	}

	inputFile.close();

	MyHash p_hash = MyHash(2 * size); //use 2*size for better efficiency
	inputFile.open(filePath);

	std::cout << std::endl << "Loading file..." << std::endl << std::endl;

	//get data from file and add them to tree/hash
	//read name line
	//save name
	//read birthday line
	//save birthday
	//create tempNode
	//add node to hashtable
	//return to main menu

	//Close file now that we are done with it
	inputFile.close();

	//Menu
	std::cout << std::endl << std::endl << "Menu: " << std::endl;
	std::cout << "  [a] Add Record" << std::endl;
	std::cout << "  [b] Remove Record" << std::endl;
	std::cout << "  [c] Search by Key" << std::endl;
	std::cout << "  [d] Print Table" << std::endl;
	std::cout << "  [e] Print Table (sorted by key value)" << std::endl;
	std::cout << "  [f] Print Efficiency of Table" << std::endl;
	std::cout << "  [g] Write to File" << std::endl;
	std::cout << "  [q] Quit" << std::endl;
	std::cout << std::endl << "Please enter a letter to select a menu option: ";
	std::cin >> menuInput;
	menuInput = tolower(menuInput);

	//Menu handling
	while (menuInput != 'q')
	{
		switch (menuInput)
		{
		case 'a':
			//Add Record
			//head.add();
			break;
		case 'b':
			//Remove record
			//head.remove();
			break;
		case 'c':
			//Search By VIN
			//head.searchByVIN();
			break;
		case 'd':
			//Print Table
			//head.printTable();
			break;
		case 'e':
			//Print Sorted Table
			//head.printSortedTable();
			break;
		case 'f':
			//Print Efficiency of Table
			//head.efficiency_stats();
			break;
		case 'g':
			//Write to File
			//head.writeToFile();
			break;
		default:
			std::cout << "That was an invalid input. ";
			break;
		}

		std::cout << std::endl << std::endl << "Menu: " << std::endl;
		std::cout << "  [a] Add Record" << std::endl;
		std::cout << "  [b] Remove Record" << std::endl;
		std::cout << "  [c] Search by Key" << std::endl;
		std::cout << "  [d] Print Table" << std::endl;
		std::cout << "  [e] Print Table (sorted by key value)" << std::endl;
		std::cout << "  [f] Print Efficiency of Table" << std::endl;
		std::cout << "  [g] Write to File" << std::endl;
		std::cout << "  [q] Quit" << std::endl;
		std::cout << std::endl << "Please enter a letter to select a menu option: ";
		std::cin >> menuInput;
		menuInput = tolower(menuInput);
	}
	std::cout << "Would you like the save the changes you made during this session?" << std::endl;
	std::cout << "This will overwrite the existing file and erase all previous data." << std::endl;
	std::cout << "Enter [y/Y] for Yes or [n/N] for No: ";
	std::cin >> menuInput;

	menuInput = tolower(menuInput);

	if (menuInput == 'y')
	{
		std::cout << std::endl << std::endl << "Rewriting file..." << std::endl;
		//head.saveToFile(filePath);
	}

	std::cout << std::endl << std::endl << "Thank you for using this program! We hope to see you again soon!" << std::endl;

	system("pause");
	return 0;
}