/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
	int num, count, sum=0;
	
	printf("Enter a number N :");
	scanf("%d", &num);
	
	for(count = 1; count <= num; count++)
	{
		//printf("%d\n",count);
		sum = sum + count;
	}
	printf("\n Sum of 1 to %d is : %d \n",num ,sum);
	
	return 0;
}

