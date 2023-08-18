#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints days
 * @mon: month
 * @day: day
 * @year: year
 *
 */
void print_remaining_days(int mon, int day, int year)
{
	int dnmon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int rdays = 0;
	int i;

	if (mon < 1 || mon > 12 || day < 1 || day > dnmon[mon])
	{
		printf("Invalid dte: %02d/%02d/%04d\n", mon, day, year);
		return;
	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		dnmon[2] = 29;
	}
	for (i = mon; i <= 12; i++)
	{
		if (i == mon)
		{
			rdays += dnmon[i] - day;
		}
		else
		{
			rdays += dnmon[i];
		}
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", rdays);
}
