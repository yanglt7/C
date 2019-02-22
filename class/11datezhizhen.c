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
	struct date *pDate = &today; 

	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("address of today is %p\n", pDate);
		
	return 0;
 } 
 

