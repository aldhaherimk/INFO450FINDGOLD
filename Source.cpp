using namespace std;
#include <string>
#include <stdio.h>
#include <iostream>
#include "Header.h"



void main(){
	string input, opt = "y";
	const int r=GoldFinding::row_size;
	const int col=GoldFinding::col_size;

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

	do
	{
		GoldFinding obj;// creatin object for function call

		string GandB[r][col];
		GandB[r][col] = obj.settingGoldandBomb(hiddenBoard);// Function Call
		int score = obj.goldCheck(GandB);       //Function Call
		cout << " You Earn " <<  score << " points";
		cout << " Better Luck Next Time !! ";
		cout << " Here is your board ";

		obj.display(GandB);  // parsing Array to the function

		cout << "  Enter y to play again ";
		cin >> input;
	} while (opt.compare(input) == 0);




	
	system("pause");// wait for termination..
}// End of main function