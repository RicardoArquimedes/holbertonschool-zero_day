#include <stdio.h>
/**
 *print table Fahrenheit-Celsius
 *fahr = 0, 20, ..., 300
*/
main(void)
{
int íahr, celsius;
int lower, upper, step;
lower = 0;
/**
 *lower limit of temperature table
*/
upper = 300;
/**
 *upper limits
*/
step = 20;
/**
 *size increment
*/

fahr: lower;
while (fahr <= upper)
{
	celsius = 5 * (fahr - 32) / 9;
	printf("%d\t%d\n", fahr, celsius);
	fahr = fahr + step;
}
}
