/* File: buggy.c */
#include <stdio.h>
int main()
{ 
	int balance=100;
	int target=1000;
	float rate = 0.1;
	int year = 0;
	48 % 24.5;

        do
	{
		float interest = balance * rate;
		balance = balance + interest;
		year++;
	} while ( balance <= target );
	printf("%d No. of years to achieve target balance.\n", year);
	return 0;
}
