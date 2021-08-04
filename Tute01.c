/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
	int mark1,mark2;
	int sum;
	float avg;
	
	printf("Enter mark 1 :");
	scanf("%d",&mark1);
	
	printf("Enter mark 2 :");
	scanf("%d",&mark2);
	
	sum = mark1 + mark2;
	printf("Sum of marks = %d \n",sum);
	
	avg = sum/2;
	printf("Average = %.2f \n",avg);
	
	return 0;
}