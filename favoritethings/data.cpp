#include "stdafx.h"
#include <iostream>
#include <string>
#include "data.h"
using namespace std;

int Data::captureFavorites()
{
	int typeanswer;
	cout << "Which type? CD, Micro brew or Road Race" << endl;
	cout << "Enter CD for CD, MB for Micro brew or RR for Road Race" << endl;
	cin >> typeanswer;

	if (typeanswer == 'CD' || 'cd')
	{
		cout << "CD Name?" << endl;
		cin >> cdname;
		cout << "Artist Name?" << endl;
		cin >> artist;
		cout << "Rating?" << endl;
		cin >> cdrating;
		cout << "Favorite Track on CD?" << endl;
		cin >> favoritetrack;
	}
	else if (typeanswer == 'MB' || 'mb')
	{
		cout << "Brew Name?" << endl;
		cin >> brewname;
		cout << "Brewery?" << endl;
		cin >> brewery;
		cout << "Rating?" << endl;
		cin >> brewrating;
		cout << "Alcohol Content?" << endl;
		cin >> alcoholcontent;
	}
	else if (typeanswer == 'RR' || 'rr')
	{
		cout << "Race Date?" << endl;
		cin >> date;
		cout << "Race Distance?" << endl;
		cin >> distance;
		cout << "Geographic Location?" << endl;
		cin >> location;
		cout << "Your race time?" << endl;
		cin >> time;
		cout << "Your ranking?" << endl;
		cin >> ranking;
	}

}
