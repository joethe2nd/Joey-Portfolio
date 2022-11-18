#include <stdio.h>

//Ask for three integers, take the sum of all of them.

int main(){
	int x, y, z;
	printf("Enter the first number of three: ", x);
	scanf("%i", &x);
	printf("Enter the second number the three: ", y);
	scanf("%i", &y);
	printf("Enter the last number: ", z);
	scanf("%i", &z);
	int w;
	w = x + y + z;
	printf("The sum of your numbers is %i. \n", w);
	return 0;
}
