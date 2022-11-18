#include <stdio.h>

int main(){
	char name[30];
	printf("Enter your name here:");
	scanf("%s", &name);
	printf("%s, thats a pretty bad name. \n ", name);
	return 0;
}
