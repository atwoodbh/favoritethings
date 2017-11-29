// favoritethings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "data.h"
#include <fstream>
using namespace std;

const int LISTSIZE = 50;

int main()
{
	//Setting up the program and asking questions
	char answer;
	string filename;
	Data *aData = NULL;
	Data **myData;
	cout << "Welcome to your very own favorite things tracker!" << endl;
	cout << "Would you like to record a new favorite thing or display your current favorite things" << endl;
	cout << "Enter 'N' for New favorite or 'C' for Current favorites" << endl;
	cin >> answer;
	cin.ignore();
	cin.clear();

	myData = new Data*[LISTSIZE];
	//Getting input
	if (answer == 'n' || answer == 'N')
	{
		aData = new Data();
		Data->captureFavorites;
	}
	else if (answer == 'c' || answer == 'C')
	{
		cout << "Enter full-path filename where list is saved" << endl;
		cin >> filename;
	}

	//Read from file
	ifstream infile(filename);
	if (infile.good())

	//Save to file
	ofstream outfile(filename);
	if (filename.good())
	{
		cout << "File Saved Sucessfully" << endl;
	}

	//Print to console
	for (i = 0; i < count; i++)
	{
		filename << myData[i];
	}

	//Freeing up memory
	for (i = 0; i < count; i++)
	{
		delete myData[i];
	}
	delete myData;

    return 0;
}

