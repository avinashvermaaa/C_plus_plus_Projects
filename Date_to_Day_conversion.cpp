/*
C++ program to Find the DAY from a given random DATE

give input as instructed below

input format :
	date (press spacebar) -->  month(press spacebar)  --> year
	
	// example 1 : -
	input  :-  09 06 2023
	Output :-  Saturday 
	
	// example 2 : -
	input  :-  29 07 2023
	Output :-  Saturday 
	
	// example 3 : -
	input  :-  14 02 2023
	Output :-  Tuesday 
*/

#include <bits/stdc++.h>
using namespace std;

int Date_to_day(int day, int month, int year)
{
	if(month == 1)
	{
		month = 13;
		year--;
	}	
	
	if(month == 2)
	{
		month = 14;
		year--;
	}	
	
	int q = day ;
	int m = month ;
	int k = year % 100 ;
	int j = year / 100 ;
	int h = q + 13 *(m + 1) / 5 + k + k/4 + j/4 + 5*j;
	
	h = h % 7;
	
	switch(h)
	{
		case 0:
				cout<<"Saturday \n";	
				break;
		case 1:
				cout<<"Sunday \n";	
				break;
		case 2:
				cout<<"Monday \n";	
				break;
		case 3:
				cout<<"Tuesday \n";	
				break;
		case 4:
				cout<<"Wednesday \n";	
				break;
		case 5:
				cout<<"Thursday \n";	
				break;
		case 6:
				cout<<"Friday \n";	
				break;
				
	}
	
	
	
}


int main(){
	
	int day,month,year;
	cin>>day>>month>>year;
	Date_to_day(day,month,year);
	
	
	
}