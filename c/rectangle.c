#include <stdio.h>

//Ask for three integers, take the sum of all of them.

int main(){
	int l, h, a, p;
	printf("What is the length of your rectangle? ", l);
	scanf("%i", &l);

	if( l <= 0 )
	{
	printf("Length can't be negative or zero!\n");
	return 0;
	}	

	printf("What is the height of your rectangle? ", h);
	scanf("%i", &h);

	if( h <= 0 )
	{
	printf("Height can't be negative or zero!\n");
	return 0;
	}	

	a = l * h;
	printf("The area of your rectangle is %i. \n", a);

	p = 2 * l + 2 * h;
	printf("The perimeter of your rectangle is %i. \n", p);
	return 0;
}
