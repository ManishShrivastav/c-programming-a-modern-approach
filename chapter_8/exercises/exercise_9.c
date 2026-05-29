/*
9.
Using the array of Exercise 8, write a program fragment that computes the average tempera-
ture for a month (averaged over all days of the month and all hours of the day).

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// Declaration fragment
	float temperature_readings[30][24];
	float total_readings = 0.0f, avg_temperature;
	int i, j;

	// Array initialization fragment
	// Done by scanf, reading from a file, ...etc
	// I will do it using random number generation (from 0 to 39 C)
	srand((unsigned) time(NULL));

	// Computation fragment
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 24; j++)
		{
			temperature_readings[i][j] = rand() % 40;
			total_readings += temperature_readings[i][j];
		}
	}

	avg_temperature = total_readings / (30 * 24);

	printf("Average temperature over the month = %.2f\n", avg_temperature);


	return 0;
}

