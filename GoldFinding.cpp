using namespace std;
#include <string>
#include <stdio.h>
#include <iostream>
#include "time.h"
#include "Header.h"

const int r = GoldFinding::row_size;
const int c = GoldFinding::col_size;


/*  <----------------Start of the function HERE-------------------------------> */
void GoldFinding::display(string loadedArray[r][c])
{
	cout << "" << endl;
	cout << "     1  2  3  4  5  6  7  8"<< endl;
	cout << "-----------------------------------"<< endl;
	for (int y = 0; y <= 7; y++)
	{
		cout << " ";
		cout << y + 1 << " | ";
		for (int z = 0; z <= 7; z++)
		{
			cout << loadedArray[y][ z] << "  ";

		}
		cout << endl;
	}
}
/*  <----------------END of the function HERE-------------------------------> */

/*  <----------------Start of the function HERE-------------------------------> */

int GoldFinding::goldCheck(string gAndb2[r][c]){
	string val;
	int score = 0;
	int guess = 5;

	do
	{
		guess--;
		cout << " Enter x coordinate : ";
		int xCo;
		 cin>> xCo;
		// taking input from user for x-coordinate.
		if (xCo == 0)               // Handling array index which start from 0, 
			xCo = xCo - 0;           // starting index is 0 , so do nothing
		else                        // but if
			xCo = xCo - 1;          // index is other than 0 , thn less 1 from it.
		cout << endl;
		cout << " Enter y coordinate : ";
		int yCo;
		cin >> yCo;
		// taking input from user for y-coordinate
		if (yCo == 0)                // Handling array index which start from 0, 
			yCo = yCo - 0;
		else
			yCo = yCo - 1;
		cout << endl;

		val = gAndb2[xCo][ yCo];
		
		if (val.compare("G") == 0) {
			score++;
			cout << "You Found Gold !! , you got and extra move ";
			guess = guess + 1;// extra move , additional task
			cout << endl;
			gAndb2[xCo][ yCo] = "F";
			cout << endl;
		}
		if (val.compare("B") == 0) {
			cout << " Game OVER  , bomb is here ";
			cout << endl;
			break;
		}
		if (val.compare("") == 0) {
			cout << "Too Bad !!you have " << guess << " more to go "; cout << endl;
			cout << endl;
		}

	} while (guess > 0);



	return score;


}
/*  <----------------END of the function HERE-------------------------------> */