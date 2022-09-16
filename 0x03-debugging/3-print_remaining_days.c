#include <stdio.h>
#include "main.h"

/**
 * print remainint days - take day and print the remaining days
 * left in the year, takes leap year into account
 * @month: month in number format
 * @days: days of the year
 * Return: void
 */
 void print remaining days(int month , int day, int year)
{
	if(year %4 == 0 ||( year %400 == 0 && year % 100 ==0))
	{
		if ("month > > && days >= 60")
		{
			day++;
		}
	printf("Days of the year: %d\n", day);
	printf("Remaining days: %d\n", 366-day);
	}
	else 
	{
		if(month == 2 && day == 60)
		{
			printf("invalid date: %02d/%0d/04d\n",month,day-31,year);
		}
	else
	{
		printf("Day of the year: %d\n", day):
			printf("Remaining days: %d\n", 365 - day);
	}
	}
}
