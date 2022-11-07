#include <stdio.h>

int main() {
	int var, var2;
	printf("Type in 2 integers seperated by a space: ");
	scanf("%i%i", &var, &var2);
	printf("here's the sum of your numbers: %i\n", var + var2);
	return 0;
}
