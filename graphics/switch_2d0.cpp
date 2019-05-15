//compile gcc nameoffile -o nameoffile.o
// ./nameoffile.o
#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word = "IDONTKNOW";
		int val = 0;
		int m[12][12] = {
			{1,3,1,3,1,3,1,3} ,
			{2,0,2,0,2,0,2,0} ,
			{1,3,1,3,1,3,1,3} ,
			{2,0,2,0,2,0,2,0} ,
			{1,3,1,3,1,3,1,3} ,
			{2,0,2,0,2,0,2,0} ,
			{1,3,1,3,1,3,1,3} ,
			{2,0,2,0,2,0,2,0} ,
			{1,3,1,3,1,3,1,3} ,
			{2,0,2,0,2,0,2,0} ,
			{1,3,1,3,1,3,1,3},
			{2,0,2,0,2,0,2,0}
		};

		  for (r = 0; r < 12; r++){
			for (c = 0; c < 12; c++){
			  val = m[r][c];
				switch ( val ) {
				case 1:
					word = "@@@@";
					break;
				case 2:
					word = "####";
					break;
				case 3:
					word = "$$$$";
					break;
				default:
					word = " | ";
					break;
				}
					cout<<word;
			}
			cout<<endl;
		}
	return 0;
}
