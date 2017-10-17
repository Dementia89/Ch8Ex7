// Ch8Ex7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void EnterNames();

int main()
{
	cout.precision(4);
	
	EnterNames();

	cin.ignore();
	cin.get();

    return 0;
}

void EnterNames()
{
	string name = "";
	float totalVotes = 0;
	string names[5] = {};
	float votes[5] = {};

	for (int i = 1; i < 6; i++)
	{
		cout << endl;
		cout << "Enter candidate " << i << " last name: ";
		getline(cin, name);
		cout << "Enter " << name << " votes: ";
		cin >> votes[i - 1];
		totalVotes += votes[i - 1];
		names[i - 1] = name;
		cout << endl;
		cin.ignore();
	}

	cout << left << setw(20) << "Candidate" << setw(20) << "Votes Received" << setw(20) << "% Total Votes" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		//float percentage = votes[i] / totalVotes;
		cout << left << setw(20) << names[i] << setw(20) << votes[i] << setw(20) << (votes[i] / totalVotes) * 100;
	}

	cout << endl << setw(20) << "Total " << setw(20) <<
		totalVotes;
}