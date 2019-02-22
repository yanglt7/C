#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct date{
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today=(struct date){04,16,2018};
	
	struct date day;
	
	struct date *pDate = &today; 
//	struct date thismonth={.month=4, .year=2018};
//	today.month = 04;
//	today.day = 16;
//	today.year = 2018;
//	
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
//	printf("This month is %i-%i-%i.\n",
//		thismonth.year,thismonth.month,thismonth.day);
	printf("The day's date is %i-%i-%i.\n",
		day.year,day.month,day.day);
	printf("address of today is %p\n", pDate);
		
	return 0;
 } 
 

