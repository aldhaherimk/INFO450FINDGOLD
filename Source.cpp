using namespace std;
#include <string>
#include <stdio.h>
#include <iostream>
#include "Header.h"
#include "time.h"

const int r = GoldFinding::row_size;
const int col = GoldFinding::col_size;


void main(){
	string input, opt = "y";
	

	string hiddenBoard[r][col];
	cout << "" << endl;
	cout << "    1  2  3  4  5  6  7  8" << endl;
	cout << "---------------------------------" << endl;

	for (int x = 0; x < col; x++)
	{
		for (int y = 0; y < r; y++)
		{
			hiddenBoard[x][y] = "?" ; // Assigning Values to the hiddenBoard
		}
	}
	cout << endl;
	
	for (int x = 0; x < col; x++)
	{
		
		cout << x + 1 << " | ";
		for (int y = 0; y < r; y++){
			cout << hiddenBoard[x][y] << "  "; // Displaying the hidden board
		}
		cout<< endl;
	}
	cout << endl;
	cout << "  ----------------------------------- " << endl;
	cout << " * *  ***************************  * *" << endl;
	cout << " * *          Find GOLD            * *" << endl;
	cout << " * *     You have 5 guesses,       * *" << endl;
	cout << " * *      5 pieces of Gold         * *" << endl;
	cout << " * *        And 1 Bomb             * *" << endl;
	cout << " * *        GOOD LUCK!             * *" << endl;
	cout << " * *  ***************************  * *" << endl;
	int x, y, z, Grow, Gcolm;
	string  goldandBomb[r][col];
	for (x = 0; x < 7; x++)
	{
		for (y = 0; y < 7; y++)
		{
			goldandBomb[x][y] = ""; // initializing with blanck spaces
		}
	}
	srand(time(NULL));
	for (z = 0; z < 5; z++)
	{
		Grow = rand() % 7 + 1; //for x-coordinate

		Gcolm = rand() % 7 + 1; //for y-coordinate
		goldandBomb[Grow][Gcolm] = "G"; // placing gold on random locations
	}
	// random bomb placing..

	int Brow = rand() % 7 + 1; //for x-coordinate
	int Bcolm = rand() % 7 + 1; //for y-coordinate
	goldandBomb[Brow][Bcolm] = "B";

	do
	{
		GoldFinding obj;// creatin object for function call
		int score = obj.goldCheck(goldandBomb);       //Function Call
		cout << " You Earn " <<  score << " points";
		cout << " Better Luck Next Time !! ";
		cout << " Here is your board ";

		obj.display(goldandBomb);  // parsing Array to the function

		cout << "  Enter y to play again ";
		cin >> input;
	} while (opt.compare(input) == 0);


	system("pause");// wait for termination..
}// End of main function