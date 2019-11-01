using namespace std;
#include <string>
#include <stdio.h>
#include <iostream>

class GoldFinding
{
public:
	//constant data types......
	static const int row_size = 8;
	static const int col_size = 8;

	

	//methods.....
	string settingGoldandBomb(string gAndb[row_size][col_size]);
	int goldCheck(string gAndb2[row_size][col_size]);
	void display(string loadedArray[row_size][col_size]);

	
	

	


};

