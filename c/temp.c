#include <stdio.h>

int main () {
	float c, f;
	printf("Type the tmperature in fahrenheit: ");
	scanf("%f", &f);

	c = (5.0/9.0) * (f - 32.0);

	printf("Your degrees in celsius is %.1f \n", c);

	return 0;
}
