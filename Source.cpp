#include<iostream>
using namespace std;



void FunctionMenu();
void Title();
void MenuText();

int main()
{
	FunctionMenu();
}

void FunctionMenu()
{
	int x = 0;
	Title();
	MenuText();
	cin >> x;
	switch (x)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		break;
	}
	case 3:
	{
		break;
	}
	case 4: 
	{
		break;
	}

	}

}


void MenuText()
{
	cout << "Main Menu" << endl;
	cout << "1.) Woocutter" << endl << "2.) Miner" << endl << "3.) Fighter" << endl << "4.) Settings" << endl;
}

void Title()
{
	cout << "RSBOT --- Created by Dustin and Travis" << endl << endl;
}