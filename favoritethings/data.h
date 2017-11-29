#pragma once
#include <string>
using namespace std;

class Data
{
private:
	//CDs
	string cdname;
	string artist;
	int cdrating;
	string favoritetrack;

	//Micro brews
	string brewname;
	string brewery;
	int brewrating;
	int alcoholcontent;

	//Road Races
	string date;
	int distance;
	string location;
	string time;
	int ranking;

public:
	int captureFavorites();
	void displayFavorites();
	Data();
	Data(string cdn, string ar, int cdr, string ft, string bn, string b, int br, int ac, string d, int dis, string l, string t, int rk);

	friend ofstream& operator<<(ofstream &fs, Data *thing)

};